/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:00:34 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/14 16:11:19 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*fresh;
	size_t	i;

	i = 0;
	if (!(fresh = malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		fresh[i] = 0;
		i = i + 1;
	}
	return (fresh);
}
