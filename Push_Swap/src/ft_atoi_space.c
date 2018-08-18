/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:01:28 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/15 16:08:50 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int			ft_atoi_arg(char *str, int start, int i, int long long var)
{
	int sign;

	sign = 1;
	while (start--)
		i++;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		var = (var * 10) + (str[i] - 48);
		i++;
	}
	if ((var > 2147483648 && sign == -1) || (var > 2147483647 && sign == 1))
		exit(ft_printf("Error\n"));
	return (var * sign);
}

t_link		*pars_arg(char **str, t_link *a_lst, int i, int a)
{
	while (str[i])
	{
		while (str[i][a])
		{
			if ((str[i][a] == '+' || str[i][a] == '-'))
			{
				a_lst = ft_pars(ft_atoi_arg(str[i], a, 0, 0), a_lst);
				a++;
				while (str[i][a] && str[i][a] <= '9' && str[i][a] >= '0')
					a++;
			}
			if (str[i][a] <= '9' && str[i][a] >= '0')
			{
				a_lst = ft_pars(ft_atoi_arg(str[i], a, 0, 0), a_lst);
				while (str[i][a] && str[i][a] <= '9' && str[i][a] >= '0')
					a++;
			}
			if (str[i][a])
				a++;
		}
		a = 0;
		i++;
	}
	return (a_lst);
}
