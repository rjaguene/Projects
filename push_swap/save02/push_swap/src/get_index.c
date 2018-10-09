/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:34:52 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/06 16:41:13 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		get_index(a_list *a_lst, int i)
{
	int a;

	a = 0;
	while (a_lst)
	{
		if (a_lst->nb == i)
			return (a);
		a++;
		a_lst = a_lst->next;
	}
	return (-1);
}
