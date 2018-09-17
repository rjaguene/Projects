/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:31:14 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/16 17:38:13 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (n > 0)
	{
		if (*s1 != *s2)
			return (0);
		else if (*s1 == '\0')
			return (1);
		s1 = s1 + 1;
		s2 = s2 + 1;
		n = n - 1;
	}
	return (1);
}
