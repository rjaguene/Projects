/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:28:19 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/08 11:15:32 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	big;

	if (n < 0)
	{
		big = (long)n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		big = n;
	if (big <= 9)
	{
		ft_putchar_fd(big + '0', fd);
	}
	else
	{
		ft_putnbr_fd(big / 10, fd);
		ft_putnbr_fd(big % 10, fd);
	}
}
