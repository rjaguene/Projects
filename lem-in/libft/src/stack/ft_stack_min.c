/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:26:13 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:37 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_min(t_stack *stack)
{
	int			i;
	int			min;

	if (ft_stack_issort(stack))
		return (ft_stack_top(stack));
	min = stack->values[0];
	i = 1;
	while (i <= stack->top)
	{
		if (stack->values[i] < min)
			min = stack->values[i];
		i++;
	}
	return (min);
}
