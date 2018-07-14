/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:14:11 by rojaguen          #+#    #+#             */
/*   Updated: 2018/05/31 18:08:06 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*del_front(a_list *s_list)
{
	a_list *tmp;

	if (s_list != NULL)
	{
		tmp = s_list->next;
		free(s_list);
		return (tmp);
	}
	return (NULL);
}
