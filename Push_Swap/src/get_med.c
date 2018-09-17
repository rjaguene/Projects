/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_med.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:34:03 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/18 11:52:03 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		check_cycle(t_link *s_list, int med)
{
	t_link *tmp;

	tmp = s_list;
	while (tmp)
	{
		if (tmp->nb < med)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int		get_med(t_link *a_lst)
{
	static int	bol;
	int			i;
	int			*a;

	if (bol != 2)
	{
		bol = list_count(a_lst);
		if (bol >= 150)
			bol = 1;
		else
			bol = 0;
	}
	a = lst_to_int(a_lst, list_count(a_lst));
	a = quicksort(a, list_count(a_lst));
	i = list_count(a_lst);
	if (list_count(a_lst) > 7 && bol == 1)
		i = a[i / 7];
	else
		i = a[i / 2];
	free(a);
	return (i);
}
