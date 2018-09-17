/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 00:34:05 by akhercha          #+#    #+#             */
/*   Updated: 2018/06/14 05:08:56 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strconcat(char *s1, char *s2)
{
	size_t		len;
	char		*new;

	len = ft_strlen(s1) + ft_strlen(s2);
	new = ft_strnew(len + 1);
	if (new == NULL)
		return (NULL);
	ft_strcat(new, s1);
	ft_strcat(new, s2);
	return (new);
}
