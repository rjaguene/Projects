/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 21:51:08 by akhercha          #+#    #+#             */
/*   Updated: 2018/06/14 05:07:55 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_countdigit(unsigned long long n, int base, size_t count)
{
	return (n > 0) ? ft_countdigit(n / base, base, count + 1) : count;
}

char			*ft_lltoa_base(unsigned long long n, int base)
{
	size_t		digit;
	char		*str;

	digit = (n) ? ft_countdigit(n, base, 0) : 1;
	if (!(str = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	str[digit] = '\0';
	while (digit--)
	{
		str[digit] = ft_abs(n % base) + (n % base > 9 ? 'A' - 10 : '0');
		n /= base;
	}
	return (str);
}
