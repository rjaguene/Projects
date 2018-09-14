/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:41:49 by akhercha          #+#    #+#             */
/*   Updated: 2017/08/09 21:28:34 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstat(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	if (!begin_list)
		return (NULL);
	i = 0;
	while (i < nbr)
	{
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			return (NULL);
		i = i + 1;
	}
	return (begin_list);
}
