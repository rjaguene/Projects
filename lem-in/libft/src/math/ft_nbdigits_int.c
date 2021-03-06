/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbdigits_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 00:30:54 by akhercha          #+#    #+#             */
/*   Updated: 2018/07/18 19:24:20 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbdigits_int(int n)
{
	int	r;

	r = 1;
	if (n < 0)
		n = (n == -2147483648) ? 2147483647 : -n;
	while (n > 9)
	{
		n /= 10;
		r++;
	}
	return (r);
}
