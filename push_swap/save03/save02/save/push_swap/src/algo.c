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
	ft_printf("med %d\n",med);
//	ft_pa(&b_lst, &a_lst);
//	ft_pa(&b_lst, &a_lst);
	//print_list(a_lst);
//	ft_visu(a_lst,b_lst);
		while (list_count(a_lst) != 2)
		ft_split(&a_lst, &b_lst, get_med(a_lst));
	while (list_count(b_lst) != 0 || ft_check_sort(a_lst) != 0) //&& i--)
	{
		if (a_lst->nb > a_lst->next->nb)
			a_lst = ft_sa(a_lst);
		put_val(&a_lst, &b_lst);
	}
//	while (list_count(a_lst) != 0)
//	put_val(&b_lst, &a_lst);

//	ft_visu(a_lst,b_lst);
	//	ft_pa(&b_lst, &a_lst);
	ft_visu(a_lst,b_lst);
//	while (list_count(b_lst) != 0)
//	{
//		put_val(&a_lst, &b_lst);
//	put_val(&a_lst, &b_lst);
//	put_val(&a_lst, &b_lst);
//	}
	i = 0;
//	while (list_count(b_lst) != 0) //&& i--) //|| ft_check_sort(a_lst) != 0) //&& i--)
//	{
	//	while  (list_count(a_lst) > 2 + i)
	//		ft_pa(&b_lst, &a_lst);
//	put_val_front(&a_lst,7);
//	}
	/*
	
	while (list_count(b_lst) != 0) //&& i--) //|| ft_check_sort(a_lst) != 0) //&& i--)
	{
		if (a_lst->nb > a_lst->next->nb)
		{
			printf("dd\n");
			ft_sa(a_lst);
		}
		if (ft_check_sort(a_lst) == 0)
		{
			ft_pa(&a_lst, &b_lst);
			if (ft_check_sort(a_lst) == 1)
			{
				ft_sa(a_lst);
				ft_pa(&b_lst, &a_lst);
			}
		}
		printf("\na = \n");
		print_list(a_lst);
		printf("\nb = \n");
		print_list(b_lst);
		
//	print_list(a_lst);
//	printf("\n");
	}*/
//	printf("\n");
//	print_list(a_lst);
//	printf("\n");
//	print_list(b_lst);
	return (a_lst);
}
