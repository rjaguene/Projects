/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:40:16 by akhercha          #+#    #+#             */
/*   Updated: 2017/08/09 21:29:01 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *begin_list)
{
	int		len;

	if (!begin_list)
		return (0);
	len = 1;
	while (begin_list->next)
	{
		len = len + 1;
		begin_list = begin_list->next;
	}
	return (len);
}
