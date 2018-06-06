/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:19:44 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/03 20:54:19 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*del_end(a_list *s_list)
{
	a_list *tmp;
	a_list *last;

	last = s_list;
	tmp = s_list;
	while (tmp->next)
	{
		last = tmp;
		tmp = tmp->next;
	}
	last->next = NULL;
	free(tmp);
	return (s_list);
}
