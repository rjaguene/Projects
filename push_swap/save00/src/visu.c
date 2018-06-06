/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 16:02:48 by rojaguen          #+#    #+#             */
/*   Updated: 2018/05/31 19:34:13 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		ft_visu(a_list *s_list, a_list *b_lst)
{
	int b;
	int a;
	int i;

	i = 0;
//	a = list_count(s_list);
//	b = list_count(b_lst);
	ft_printf("%d %d\n",a,b);
	ft_printf("\n*----------------------*\n");
	ft_printf("pile A            pile B\n");
	while (s_list || b_lst)
	{
		if (s_list)
		{
			ft_printf("  %d",s_list->nb);
			s_list = s_list->next;
		}
		if (b_lst)
		{
			ft_printf("                %d",b_lst->nb);
			b_lst = b_lst->next;
		}
//		if (s_list == NULL || b_lst == NULL)
//			return ;
		ft_printf("\n");
		i++;
	}
	ft_printf("*----------------------*\n");
}
