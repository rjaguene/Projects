/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_put.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:58:10 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:43 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_stack_put(t_stack *stack)
{
	int 	i;

	if (stack == NULL)
		return ;
	ft_putchar('(');
	ft_putnbr(stack->top + 1);
	ft_putchar('/');
	ft_putnbr(stack->capacity);
	ft_putstr("):[");
	i = stack->top;
	while (i >= 0)
	{
		ft_putnbr(stack->values[i]);
		if (i > 0)
			ft_putstr(", ");
		i--;
	}
	ft_putendl("]");
}
