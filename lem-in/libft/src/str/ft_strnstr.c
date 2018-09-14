/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 22:00:19 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/16 17:55:11 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = ft_strlen(needle);
	if (!ft_strlen(haystack))
		return (NULL);
	if (!i)
		return ((char *)haystack);
	while (len-- >= i && *haystack)
	{
		if (!ft_strncmp((char*)haystack, (char*)needle, i))
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}
