/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ant_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:47:41 by rojaguen          #+#    #+#             */
/*   Updated: 2018/09/27 18:16:57 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int				*init(int *path, int tmp, int *b)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (path[a] != -1)
		a++;
	*b = a;
	a--;
	while (a >= i)
	{
		tmp = path[i];
		path[i] = path[a];
		path[a] = tmp;
		i++;
		a--;
	}
	return (path);
}

t_link			*init_nd(int *path, t_link *lst, t_link *tmp, t_env *env)
{
	int a;

	a = 0;
	while (path[a] != -1)
	{
		tmp = new_link(a - 1,
				node_getname_byid(GRAPH.lst_nodes, path[a]));
		lst = add_link_end(lst, tmp);
		tmp = NULL;
		a++;
	}
	return (lst);
}

void			print_room(t_link *tmp)
{
	if (tmp->visit == 1)
	{
		ft_putchar('L');
		ft_putnbr(tmp->id_ant);
		ft_putchar('-');
		if (tmp->next)
			ft_putstr(tmp->name);
		else
			ft_putstr("End");
		ft_putchar(' ');
	}
}

t_link			*mooves(t_link *tmp)
{
	tmp->visit = 0;
	tmp->next->visit = 1;
	tmp->next->id_ant = tmp->id_ant;
	return (tmp);
}

void			ants_moove(t_link *lst, t_link *tmp, t_env *env, int ants)
{
	int i;

	i = get_max(lst);
	while (is_end(lst) == 1)
	{
		while (i >= 0)
		{
			tmp = get_nd(lst, i);
			if (tmp->next && tmp->visit == 1 && tmp->next->visit == 0)
				tmp = mooves(tmp);
			else if (!tmp->next && tmp->visit == 1)
				tmp->visit = 0;
			if (i == 0 && tmp->visit == 0 && !(ants == env->total_ants + 1))
			{
				tmp->visit = 1;
				tmp->id_ant = ants;
				if (!(ants == env->total_ants + 1))
					ants++;
			}
			i--;
		}
		i = get_max(lst);
		tmp = lst;
		print(lst, lst, 0, 0);
	}
}
