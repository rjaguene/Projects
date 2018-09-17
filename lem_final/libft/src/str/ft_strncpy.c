/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 00:20:09 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/10 16:07:52 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		actual;

	actual = 0;
	while (actual < n && src[actual] != '\0')
	{
		dest[actual] = src[actual];
		actual = actual + 1;
	}
	while (actual < n)
	{
		dest[actual] = '\0';
		actual = actual + 1;
	}
	return (dest);
}
