/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:37:35 by rojaguen          #+#    #+#             */
/*   Updated: 2018/05/30 21:57:42 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		ft_check(char **argv)
{
	int i;
	int a;

	i = 1;
	a = 0;
	while (argv[i])
	{
		while (argv[i][a] == ' ')
			a++;
	if ((argv[i][a] == '-' || argv[i][a] == '+') && argv[i][a + 1] > 47 
			&& argv[i][a + 1] < 57 && argv[i][a + 1])
			a++;
		while (argv[i][a])
		{
			if ((argv[i][a] < 48 || argv[i][a] > 57)
					&& argv[i][a] != ' ')
				return (0);
			a++;
		}
		a = 0;
		i++;
	}
	return (1);
}
