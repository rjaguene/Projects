/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:58:18 by rojaguen          #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*algo(int *v, a_list *a_lst, a_list *b_lst)
{
	int i = 10;
	while (/*ft_check_sort(a_lst) == 1 && list_count(a_lst) != 0 &&*/ i-- && a_lst->next)
	{
		if (a_lst->nb > a_lst->next->nb)
		{
			ft_pa(&b_lst, &a_lst);
		if (a_lst->nb > a_lst->next->nb)
			a_lst = ft_sa(a_lst);
		}
	}
//	while (/*ft_check_sort(a_lst) == 1 && list_count(a_lst) != 0 &&*/ i-- && a_lst->next)
//	{
//		if (a_lst->nb 
//	}
	ft_printf("\n");
	print_list(a_lst);
	ft_printf("\n");
	print_list(b_lst);
	return (a_lst);
}
