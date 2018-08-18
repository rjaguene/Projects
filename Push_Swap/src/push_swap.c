/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:12:24 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/17 13:13:38 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link				*ft_pars(int nb, t_link *s_list)
{
	t_link *elem;
	t_link *tmp;

	tmp = NULL;
	if (!(elem = (t_link*)malloc(sizeof(t_link))))
		return (NULL);
	if (nb)
		elem->nb = nb;
	elem->next = NULL;
	if (s_list == NULL)
	{
		free(tmp);
		free(s_list);
		return (elem);
	}
	else
	{
		tmp = s_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = elem;
		return (s_list);
	}
}

int					ft_check_doubl(t_link *s_list, int last)
{
	int i;

	i = 0;
	if (!s_list)
		return (1);
	while (s_list && i < last)
	{
		s_list = s_list->next;
		i++;
	}
	if (s_list)
	{
		i = s_list->nb;
		s_list = s_list->next;
	}
	else
		return (1);
	while (s_list)
	{
		if (s_list->nb == i)
			return (0);
		s_list = s_list->next;
	}
	return (1);
}

int					check_loop(t_link *a_lst)
{
	t_link	*tmp;
	int		i;

	i = 0;
	tmp = a_lst;
	while (tmp)
	{
		if (ft_check_doubl(a_lst, i) == 0 || !a_lst)
			return (1);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

int					main(int argc, char **argv)
{
	t_link		*a_lst;
	int			i;

	i = 0;
	a_lst = NULL;
	if (argc < 2)
		return (0);
	if (ft_check(argv) == 0)
		return (ft_printf("Error\n"));
	a_lst = pars_arg(argv, a_lst, 1, 0);
	if (check_loop(a_lst) != 0)
	{
		ft_free_lst(&a_lst, NULL);
		return (ft_printf("Error\n"));
	}
	if (ft_check_sort(a_lst) != 0)
		algo(a_lst, NULL);
	else
		ft_free_lst(&a_lst, NULL);
	return (0);
}
