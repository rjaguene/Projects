/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 16:53:36 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/08 11:14:21 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*from;
	char	*to;

	from = (char*)src;
	to = (char*)dest;
	if (from < to)
	{
		from = (from + n) - 1;
		to = (to + n) - 1;
		while (n-- > 0)
			*to-- = *from--;
	}
	else
	{
		while (n-- > 0)
			*to++ = *from++;
	}
	return (dest);
}
