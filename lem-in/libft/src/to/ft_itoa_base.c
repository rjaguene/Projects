/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 21:49:44 by akhercha          #+#    #+#             */
/*   Updated: 2018/06/14 05:08:13 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_countdigit(int n, int base, size_t count)
{
	return (n > 0) ? ft_countdigit(n / base, base, count + 1) : count;
}

char			*ft_itoa_base(int n, int base)
{
	size_t		digit;
	char		*str;
	int			neg;

	neg = 0;
	if (n < 0)
	{
		if (base == 10)
			neg = 1;
		n *= -1;
	}
	digit = (n) ? ft_countdigit(n, base, 0) : 1;
	if (!(str = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	str[digit + neg] = 0;
	while (digit--)
	{
		str[digit + neg] = ft_abs(n % base) + (n % base > 9 ? 'A' - 10 : '0');
		n /= base;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
