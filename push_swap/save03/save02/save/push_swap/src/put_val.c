/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_val.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:36:16 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/09 13:52:11 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
	//PREND VAL SUR B ET LA PLACE AU BON ENDROIS SUR A 

void		move(a_list **a_lst, a_list **b_lst, int i)
{
	int a;

	i += 1;
	a = i;
	ft_pa(a_lst, b_lst);
	*a_lst = ft_ra(*a_lst);
	while (i--)
		ft_pa(b_lst, a_lst);
	*a_lst = ft_rra(*a_lst);
	while (a--)
		ft_pa(a_lst, b_lst);
}

a_list		*ft_loop(a_list **a_lst, a_list **b_lst, int i)
{
	a_list	*tmp;

	tmp = *a_lst;
	while (tmp)
	{
//		ft_visu(*a_lst,*b_lst);
		if (tmp->next->nb > (*b_lst)->nb && tmp->nb < (*b_lst)->nb)
		{
			move(a_lst, b_lst, i);
			break ;
		}
		tmp = tmp->next;
		if (tmp->next == NULL)
		{
			ft_pa(a_lst, b_lst);
			*a_lst = ft_ra(*a_lst);
			break ;
		}
		i++;
	}
	return (*a_lst);
}

void		put_val(a_list **a_lst, a_list **b_lst)
{
	a_list	*tmp;

	if (*a_lst)
		tmp = *a_lst;
	else
	{
		ft_pa(a_lst, b_lst);
		return ;
	}
	if (/*ft_check_sort(*a_lst) == 1 ||*/  list_count(*b_lst) == 0) //A voir
		return ;
	if (tmp->nb > (*b_lst)->nb || list_count(*a_lst) == 0)
	{
		ft_pa(a_lst, b_lst);
		return ;
	}
	else if (tmp->nb < (*b_lst)->nb && list_count(*a_lst) <= 1)
	{
		ft_pa(a_lst, b_lst);
		*a_lst = ft_sa(*a_lst);
		return ;
	}
	*a_lst = ft_loop(a_lst,b_lst,0);
}
