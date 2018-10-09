/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:02:32 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/07 18:16:06 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isinteger(char *str)
{
	long long	nb;

	nb = ft_atoll(str);
	return (nb >= INT_MIN && nb <= INT_MAX);
}
