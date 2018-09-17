/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:14:11 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link		*del_front(t_link *s_list)
{
	t_link *tmp;

	if (s_list != NULL)
	{
		tmp = s_list->next;
		free(s_list);
		return (tmp);
	}
	return (NULL);
}
