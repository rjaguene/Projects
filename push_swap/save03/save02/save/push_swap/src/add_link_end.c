/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:51:21 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/03 19:23:30 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*add_link_end(a_list *s_list, a_list *new)
{
	a_list *tmp;

	if (s_list == NULL)
		return (new);
	else
	{
		tmp = s_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (s_list);
}
