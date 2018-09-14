/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:57:31 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:44 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_reverse_rotate(t_stack *stack)
{
	if (stack == NULL)
		return (1);
	if (stack->top < 1)
		return (1);
	ft_intarr_reverse_shift(stack->values, stack->top + 1);
	return (0);
}
