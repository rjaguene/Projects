/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:51:21 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link		*add_link_end(t_link *s_list, t_link *new)
{
	t_link *tmp;

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
