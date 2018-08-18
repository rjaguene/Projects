/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 16:02:48 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		ft_visu(t_link *s_list, t_link *b_lst)
{
	ft_printf("\n*----------------------*\n");
	ft_printf("pile A            pile B\n");
	while (s_list || b_lst)
	{
		if (s_list)
		{
			ft_printf("  %d", s_list->nb);
			s_list = s_list->next;
		}
		if (b_lst)
		{
			ft_printf("                %d", b_lst->nb);
			b_lst = b_lst->next;
		}
		ft_printf("\n");
	}
	ft_printf("*----------------------*\n");
}
