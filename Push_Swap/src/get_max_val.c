/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:08:18 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/13 12:13:59 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		get_max_val(t_link *a_lst)
{
	int			i;
	t_link		*tmp;

	tmp = a_lst;
	i = tmp->nb;
	tmp = tmp->next;
	while (tmp)
	{
		if (tmp->nb > i)
			i = tmp->nb;
		tmp = tmp->next;
	}
	return (i);
}
