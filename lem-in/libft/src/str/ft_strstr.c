/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 00:21:47 by akhercha          #+#    #+#             */
/*   Updated: 2017/08/09 21:33:28 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*i;
	char	*j;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		i = (char*)haystack;
		j = (char*)needle;
		while (*haystack == *j && *haystack != '\0')
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack = i + 1;
	}
	return (NULL);
}
