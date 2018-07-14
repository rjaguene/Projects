/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_val_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:30:12 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/14 12:42:22 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
	//PREND VAL SUR B ET LA PLACE AU BON ENDROIS SUR A 

void		ft_move(a_list **a_lst, a_list **b_lst, int i, int ***count)
{
	int a;

	i += 1;
	a = i;
	pa(a_lst, b_lst, *count);
	*a_lst = ra(*a_lst, *count);
	while (i--)
		pb(b_lst, a_lst, *count);
	*a_lst = rra(*a_lst, *count);
	while (a--)
		pa(a_lst, b_lst, *count);
}

a_list		*loop(a_list **a_lst, a_list **b_lst, int i, int **count)
{
	a_list	*tmp;

	tmp = *a_lst;
	while (tmp)
	{
//		ft_visu(*a_lst,*b_lst);
		if (tmp->next->nb > (*b_lst)->nb && tmp->nb < (*b_lst)->nb)
		{
			ft_move(a_lst, b_lst, i, &count);
			break ;
		}
		tmp = tmp->next;
		if (tmp->next == NULL)
		{
			pa(a_lst, b_lst, count);
			*a_lst = ra(*a_lst, count);
			break ;
		}
		i++;
	}
	return (*a_lst);
}

void		put_val_count(a_list **a_lst, a_list **b_lst, int *count)
{
	a_list	*tmp;

	if (*a_lst)
		tmp = *a_lst;
	else
	{
		pa(a_lst, b_lst, &count);
		return ;
	}
	if (/*ft_check_sort(*a_lst) == 1 ||*/  list_count(*b_lst) == 0) //A voir
		return ;
	if (tmp->nb > (*b_lst)->nb || list_count(*a_lst) == 0)
	{
		pa(a_lst, b_lst, &count);
		return ;
	}
	else if (tmp->nb < (*b_lst)->nb && list_count(*a_lst) <= 1)
	{
		pa(a_lst, b_lst, &count);
		*a_lst = sa(*a_lst, &count);
		return ;
	}
	*a_lst = loop(a_lst,b_lst,0, &count);
}
