/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:37:35 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/17 13:08:05 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int			check(char **argv, int i, int a)
{
	while (argv[i])
	{
		while (argv[i][a])
		{
			if ((argv[i][a] != ' ' && argv[i][a] != '+' && argv[i][a] != '-')
					&& !(argv[i][a] >= '0' && argv[i][a] <= '9'))
				return (0);
			a++;
		}
		i++;
		a = 0;
	}
	return (1);
}

int			check1(char **argv, int i, int a)
{
	while (argv[i])
	{
		while (argv[i][a])
		{
			if ((argv[i][a] == '+' || argv[i][a] == '-')
					&& !(argv[i][a + 1] <= '9' && argv[i][a + 1] >= '0'))
				return (0);
			a++;
		}
		a = 0;
		i++;
	}
	return (1);
}

int			check2(char **argv, int i, int a)
{
	while (argv[i])
	{
		while (argv[i][a])
		{
			if (argv[i][a] <= '9' && argv[i][a] >= '0')
				return (1);
			a++;
		}
		a = 0;
		i++;
	}
	return (0);
}

int			ft_check(char **argv)
{
	if (check(argv, 1, 0) == 0)
		return (0);
	if (check1(argv, 1, 0) == 0)
		return (0);
	if (check2(argv, 1, 0) == 0)
		return (0);
	return (1);
}
