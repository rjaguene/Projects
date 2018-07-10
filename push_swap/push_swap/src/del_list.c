/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:12:18 by rojaguen          #+#    #+#             */
/*   Updated: 2018/05/28 19:55:21 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*del_list(a_list **s_list)
{
	a_list *tmp;
	a_list *tmpnxt;

	tmp = *s_list;
	while (tmp)
	{
		tmpnxt = tmp->next;
		free(tmp);
		tmp = tmpnxt;
	}
	return (NULL);
}
