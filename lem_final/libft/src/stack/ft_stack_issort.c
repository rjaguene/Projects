/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_issort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:26:13 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:34 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_issort(t_stack *stack)
{
	size_t		i;

	if (stack == NULL)
		return (FALSE);
	i = stack->top;
	while (i > 0)
	{
		if (stack->values[i] > stack->values[i - 1])
			return (FALSE);
		i--;
	}
	return (TRUE);
}
