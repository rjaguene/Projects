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

a_list		*algo(a_list *a_lst, a_list *b_lst)
{
	int i = 1;
	int first = -1;
	int med; //a mettre en struct;
	b_struct *st;
	i = list_count(a_lst);
	a_list *tmp;
	tmp = a_lst;
	med = get_med(tmp);
	a_lst->count = 0;
//	printf("dd%d\n",get_last_val(a_lst));
/*	while (list_count(a_lst) != 2)
		ft_split(&a_lst, &b_lst, get_med(a_lst));
	while (list_count(b_lst) != 0 || ft_check_sort(a_lst) != 0) //&& i--)
	{
		if (a_lst->nb > a_lst->next->nb)
			a_lst = ft_sa(a_lst);
		put_val(&a_lst, &b_lst);
	}
	ft_visu(a_lst,b_lst);*/
	count_move(a_lst,b_lst,0);
	ft_printf("dasd sad as\n");
	return (a_lst);
}
