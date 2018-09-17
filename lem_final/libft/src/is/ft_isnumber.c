/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 19:19:48 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:02:38 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isnumber(char *str)
{
	int		i;

	if (str == NULL)
		return (FALSE);
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_isdigit((int)str[i]))
			|| ((i == 0) && ((str[i] == '-') || (str[i] == '+'))))
			i++;
		else
			return (FALSE);
	}
	return (TRUE);
}
