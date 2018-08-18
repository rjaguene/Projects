/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_to_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:47:06 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		*lst_to_int(t_link *a_lst, int size)
{
	int i;
	int *v;

	i = list_count(a_lst);
	v = (int *)malloc(sizeof(v) * i + 1 - size);
	i = 0;
	while (a_lst && size--)
	{
		v[i] = a_lst->nb;
		i++;
		a_lst = a_lst->next;
	}
	return (v);
}
