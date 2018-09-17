/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:57:50 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:29 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_add(t_stack *stack, int value)
{
	if (stack == NULL)
		return (1);
	if (stack->top < stack->capacity - 1)
	{
		stack->top++;
		stack->values[stack->top] = value;
		return (0);
	}
	return (1);
}
