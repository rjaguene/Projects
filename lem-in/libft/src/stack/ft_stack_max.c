/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:26:13 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:35 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_max(t_stack *stack)
{
	int			i;
	int			max;

	if (ft_stack_issort(stack))
		return (stack->values[0]);
	max = stack->values[0];
	i = 1;
	while (i <= stack->top)
	{
		if (stack->values[i] > max)
			max = stack->values[i];
		i++;
	}
	return (max);
}
