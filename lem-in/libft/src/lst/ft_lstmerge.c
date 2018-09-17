/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:44:57 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/08 11:09:54 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstmerge(t_list **begin_list1, t_list *begin_list2)
{
	t_list		*ptr;

	if (*begin_list1)
	{
		ptr = *begin_list1;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
