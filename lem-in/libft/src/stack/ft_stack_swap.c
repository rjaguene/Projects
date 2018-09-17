/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:56:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:47 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_swap(t_stack *stack)
{
	if (stack == NULL)
		return (1);
	if (stack->top < 1)
		return (1);
	ft_swap(&stack->values[stack->top], &stack->values[stack->top - 1]);
	return (0);
}
