/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr_reverse_shift.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 00:30:46 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:02:17 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_intarr_reverse_shift(int *arr, int len)
{
	int	i;
	int	tmp;

	tmp = arr[0];
	i = 0;
	while (i < len - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[len - 1] = tmp;
}
