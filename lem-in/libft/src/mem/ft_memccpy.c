/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 16:50:53 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/16 16:55:42 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_dst;
	unsigned char	*str_src;

	i = 0;
	str_dst = (unsigned char*)dest;
	str_src = (unsigned char*)src;
	while (i < n)
	{
		str_dst[i] = str_src[i];
		if (str_dst[i] == (unsigned char)c)
			return (str_dst + i + 1);
		i = i + 1;
	}
	return (NULL);
}
