/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 21:40:06 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/14 21:40:54 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_intarr_init(int *arr, int len, int value)
{
	int	i;

	i = 0;
	while (i < len)
		arr[i++] = value;
}
