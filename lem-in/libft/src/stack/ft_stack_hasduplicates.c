/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_hasduplicates.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:57:50 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:03:32 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_stack_hasduplicates(t_stack *stack)
{
	return (ft_intarr_hasduplicates(stack->values, stack->capacity));
}
