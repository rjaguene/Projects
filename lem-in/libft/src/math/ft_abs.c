/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 21:50:05 by akhercha          #+#    #+#             */
/*   Updated: 2018/07/18 19:24:10 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_abs(int n)
{
	return (n < 0 ? n * -1 : n);
}