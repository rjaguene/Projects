/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ant.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:46:39 by rojaguen          #+#    #+#             */
/*   Updated: 2018/10/08 17:04:38 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int					get_max(t_link *lst)
{
	int i;

	i = 0;
	while (lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i--);
}

t_link				*get_nd(t_link *lst, int i)
{
	int a;

	a = 0;
	while (a < i)
	{
		lst = lst->next;
		a++;
	}
	return (lst);
}

int					is_end(t_link *lst)
{
	while (lst)
	{
		if (lst->visit == 1)
			return (1);
		lst = lst->next;
	}
	return (0);
}

void				print(t_link *lst, t_link *tmp, int i, int a)
{
	i = get_max(lst);
	while (i >= 0)
	{
		while (a != i)
		{
			tmp = tmp->next;
			a++;
		}
		if (a == i && i != 0)
			print_room(tmp);
		i--;
		a = 0;
		tmp = lst;
	}
	if (is_end(lst) == 1)
		ft_putchar('\n');
}

void				print_ants(t_env *env, int *path, int i)
{
	int			ants;
	t_link		*lst;
	t_link		*tmp;

	tmp = NULL;
	lst = NULL;
	ants = 1;
	path = init(path, 0, &i, env);
	lst = init_nd(path, lst, NULL, env);
	if (get_max(lst) <= 0)
		exit(error());
	tmp = lst;
	tmp->id_ant = ants;
	tmp->visit = 1;
	ants++;
	print(lst, lst, 0, 0);
	ants_moove(lst, tmp, env, ants);
	free(path);
	ft_free_lst(&lst);
}
