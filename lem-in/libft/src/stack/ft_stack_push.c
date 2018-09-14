/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:56:38 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:42 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_push(t_stack *from, t_stack *to)
{
	if ((from == NULL) || (to == NULL))
		return (1);
	if ((from->top < 0) || (to->top >= to->capacity - 1))
		return (1);
	to->top++;
	to->values[to->top] = from->values[from->top];
	from->top--;
	return (0);
}
