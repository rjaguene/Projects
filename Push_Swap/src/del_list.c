/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:12:18 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link		*del_list(t_link **s_list)
{
	t_link *tmp;
	t_link *tmpnxt;

	tmp = *s_list;
	while (tmp)
	{
		tmpnxt = tmp->next;
		free(tmp);
		tmp = tmpnxt;
	}
	return (NULL);
}
