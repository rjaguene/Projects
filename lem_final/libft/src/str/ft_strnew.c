/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:04:04 by akhercha          #+#    #+#             */
/*   Updated: 2017/08/09 21:33:18 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;
	size_t	i;

	i = 0;
	if (!(fresh = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i <= size)
	{
		fresh[i] = '\0';
		i = i + 1;
	}
	return (fresh);
}
