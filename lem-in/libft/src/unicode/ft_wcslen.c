/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 05:08:35 by akhercha          #+#    #+#             */
/*   Updated: 2018/06/14 05:09:43 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_wcslen(wchar_t *s)
{
	int			len;

	len = 0;
	if (!s)
		return (-1);
	while (s[len] != L'\0')
	{
		if (s[++len] == L'\0')
			return (len);
		if (s[++len] == L'\0')
			return (len);
		if (s[++len] == L'\0')
			return (len);
		len++;
	}
	return (len);
}
