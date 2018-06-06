/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:51:57 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/06 21:54:33 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pa(a_list **s_list, a_list **b_lst)
{
	int i;
	a_list *tmp;
//	if (list_count(*s_list) == 0 //|| list_count(*b_lst) == 0) //a modifier
//		return ;
	tmp = *b_lst;
	(*b_lst) = (*b_lst)->next;
	tmp->next = *(s_list);
	*s_list = tmp;
}
