/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 21:07:25 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/05 15:24:29 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		ft_check_sort(a_list *s_list)
{
	int i;

	while (s_list->next)
	{
		i = s_list->nb;
		s_list = s_list->next;
		if (i > s_list->nb)
			return (1);
	}
	return (0);
}
