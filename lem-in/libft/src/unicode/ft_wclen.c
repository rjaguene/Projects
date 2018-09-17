/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wclen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 05:07:46 by akhercha          #+#    #+#             */
/*   Updated: 2018/06/10 05:47:34 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_wclen(wchar_t c)
{
	if ((MB_CUR_MAX == 1 && c > 0xFF) || c < 0 || (c >= 0xD800 && c < 0xE000))
		return (0);
	if ((c <= 0x7F && MB_CUR_MAX >= 1) || (c <= 0xFF && MB_CUR_MAX == 1))
		return (1);
	else if (c <= 0x7FF && MB_CUR_MAX >= 2)
		return (2);
	else if (c <= 0xFFFF && MB_CUR_MAX >= 3)
		return (3);
	else if (c <= 0x10FFFF && MB_CUR_MAX >= 4)
		return (4);
	return (0);
}
