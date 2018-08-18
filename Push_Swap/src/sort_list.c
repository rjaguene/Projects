/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:15:27 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/18 11:21:32 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		get_next_val(t_link *b_lst, int max_val)
{
	int		val;
	t_link	*tmp;

	tmp = b_lst;
	if (tmp->nb != max_val)
		val = tmp->nb;
	else
		val = tmp->next->nb;
	while (tmp->next)
	{
		if (tmp->nb > val && tmp->nb != max_val)
			val = tmp->nb;
		tmp = tmp->next;
	}
	return (val);
}

void	sort_list(t_link **a_lst, t_link **b_lst)
{
	int a;
	int b;

	a = get_max_val(*b_lst);
	b = get_next_val(*b_lst, a);
	if (get_index(*b_lst, a) > list_count(*b_lst) / 2)
		while ((*b_lst)->nb != a)
			*b_lst = ft_rrb(*b_lst);
	while ((*b_lst)->nb != a)
	{
		*b_lst = ft_rb(*b_lst);
		if ((*b_lst)->next->nb == a)
			*b_lst = ft_sb(*b_lst);
		if ((*b_lst)->nb == b)
			ft_pa(a_lst, b_lst);
	}
	ft_pa(a_lst, b_lst);
	if ((*a_lst)->next->nb == a)
		*a_lst = ft_sa(*a_lst);
}
