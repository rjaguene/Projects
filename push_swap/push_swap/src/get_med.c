/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_med.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:34:03 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/07 18:35:46 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		check_cycle(a_list *s_list, int med)
{
	a_list *tmp;

	tmp = s_list;
	while (tmp)
	{
		if (tmp->nb < med)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int		get_med(a_list *a_lst)
{
	int i;
	int *a;

	a = lst_to_int(a_lst);
	a = quicksort(a, a_lst);
	i = list_count (a_lst);
	i = a[i/2];
	return (i);
}
