/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_to_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:47:06 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/05 17:57:52 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		*lst_to_int(a_list *a_lst)
{
	int i;
	int *v;

	i = list_count(a_lst);
	v = malloc(sizeof(v) * i + 1);
	i = 0;
	while (a_lst)
	{
		v[i] = a_lst->nb;
		i++;
		a_lst = a_lst->next;
	}
	return (v);
}
