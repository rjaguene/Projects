/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:56:38 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:30 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_find(t_stack *stack, int to_find)
{
	int			i;

	i = 0;
	while (i <= stack->top)
	{
		if (stack->values[i] == to_find)
			return (i);
		i++;
	}
	return (-1);
}
