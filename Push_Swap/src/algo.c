/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 20:24:39 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/18 11:52:06 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		sort(t_link **a_lst, t_link **b_lst, int a)
{
	while (list_count(*a_lst) > 3)
		ft_split(a_lst, b_lst, get_med(*a_lst));
	sort_three(a_lst);
	while (list_count(*b_lst) != 0 && ft_check_sort(*a_lst) != 1)
	{
		a = get_max_val(*b_lst);
		while ((*b_lst)->nb != a)
			*b_lst = ft_rrb(*b_lst);
		ft_pa(a_lst, b_lst);
		if ((*a_lst)->nb > (*a_lst)->next->nb)
			*a_lst = ft_sa(*a_lst);
	}
}

void		small_lst(t_link **a_lst, t_link **b_lst)
{
	if (list_count(*a_lst) == 2 && (*a_lst)->nb > (*a_lst)->next->nb)
	{
		*a_lst = ft_sa(*a_lst);
		return ;
	}
	else if (list_count(*a_lst) == 2 && (*a_lst)->nb < (*a_lst)->next->nb)
		return ;
	if (list_count(*a_lst) == 3)
	{
		sort_three(a_lst);
		return ;
	}
	sort(a_lst, b_lst, 0);
	b_lst = NULL;
	a_lst = NULL;
}

void		algo(t_link *a_lst, t_link *b_lst)
{
	if (list_count(a_lst) <= 10)
	{
		small_lst(&a_lst, &b_lst);
		ft_free_lst(&a_lst, &b_lst);
		return ;
	}
	while (list_count(a_lst) > 3)
		ft_split(&a_lst, &b_lst, get_med(a_lst));
	if (a_lst->nb > a_lst->next->nb)
		a_lst = ft_sa(a_lst);
	if (ft_check_sort(a_lst) == 1)
		sort_three(&a_lst);
	while (list_count(b_lst) != 0 || ft_check_sort(a_lst) != 0)
	{
		if (a_lst->nb > a_lst->next->nb)
			a_lst = ft_sa(a_lst);
		put_val(&a_lst, &b_lst);
	}
	ft_free_lst(&a_lst, &b_lst);
}
