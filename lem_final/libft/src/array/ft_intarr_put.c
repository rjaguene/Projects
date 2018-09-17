/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 00:30:43 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:02:16 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_intarr_put(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_putnbr(arr[i]);
		if (i < len - 1)
			ft_putstr(", ");
		i++;
	}
}
