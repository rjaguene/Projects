/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:20:32 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/08 11:15:01 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	big;

	if (n < 0)
	{
		big = (long)n * -1;
		ft_putchar('-');
	}
	else
		big = n;
	if (big <= 9)
	{
		ft_putchar(big + '0');
	}
	else
	{
		ft_putnbr(big / 10);
		ft_putnbr(big % 10);
	}
}
