/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:58:20 by rojaguen          #+#    #+#             */
/*   Updated: 2018/05/28 19:32:33 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_list(a_list *list)
{
	if (!list)
		ft_printf("empty list.\n");
	while (list)
	{
		ft_printf("%d\n",list->nb);
		list = list->next;
	}
}
