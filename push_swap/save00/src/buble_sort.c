/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:53:52 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/04 19:33:55 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(a_list *tmp_next, a_list *tmp, a_list **a_lst)
{
	a_list *save;

	save = tmp_next;
	tmp_next->next = tmp;
	tmp->next = save;
	//(*a_lst) = tmp_next;
//	save = tmp_next->next;
}

int		buble_sort(a_list **a_lst, a_list **b_lst)
{
	a_list	*a;
	a_list	*b;

	//b = (*a_lst)->next;
	b = *a_lst;
	print_list(*a_lst);
	ft_printf("\n");

//	printf("als =      %p\n",*a_lst);
//	printf("tmp =      %p\ntmp_next = %p\n\n",tmp,tmp_next);
	while (b && b->next != NULL)
	{
		if (b && b->next && b->nb > b->next->nb)
		{
			swap(b->next, b, a_lst);
		}
			b = b->next;
//	printf("als =      %p\n",*a_lst);
//	printf("tmp =      %p\ntmp_next = %p\n",tmp,tmp_next);
	//	tmp = tmp_next;
	//	tmp_next = tmp_next->next;
	}
		ft_printf("-+\n");
	print_list(*a_lst);
	return (1);
}
