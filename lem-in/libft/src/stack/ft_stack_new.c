/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:55:40 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:41 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack			*ft_stack_new(int capacity)
{
	t_stack			*stack;

	if (capacity <= 0)
		return (NULL);
	if (!(stack = malloc(sizeof(t_stack))))
		return (NULL);
	stack->capacity = capacity;
	stack->top = -1;
	if (!(stack->values = malloc(sizeof(int) * capacity)))
		return (NULL);
	return (stack);
}
