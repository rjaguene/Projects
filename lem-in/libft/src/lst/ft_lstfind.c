/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:42:37 by akhercha          #+#    #+#             */
/*   Updated: 2017/08/09 21:28:42 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfind(t_list *begin_list, void *content_ref, int (*cmp)())
{
	if (!begin_list)
		return (0);
	while (begin_list->next)
	{
		if (cmp(begin_list->content, content_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	if (cmp(begin_list->content, content_ref) == 0)
		return (begin_list);
	return (0);
}
