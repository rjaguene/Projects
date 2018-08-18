/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_val.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:36:16 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/15 17:44:55 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		move(t_link **a_lst, t_link **b_lst, int i)
{
	int a;

	i += 1;
	a = i;
	while (i--)
		*a_lst = ft_ra(*a_lst);
	ft_pa(a_lst, b_lst);
	if ((*a_lst)->nb > (*a_lst)->next->nb)
		*a_lst = ft_sa(*a_lst);
	while (a--)
		*a_lst = ft_rra(*a_lst);
}

t_link		*ft_loop(t_link **a_lst, t_link **b_lst, int i)
{
	t_link	*tmp;

	tmp = *a_lst;
	while (tmp)
	{
		if (tmp->next->nb > (*b_lst)->nb && tmp->nb < (*b_lst)->nb)
		{
			if (get_index(*a_lst, tmp->next->nb) <= list_count(*a_lst) / 2)
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

void		put_val(t_link **a_lst, t_link **b_lst)
{
	if (list_count(*b_lst) == 0)
		return ;
	if ((*a_lst)->nb > (*b_lst)->nb || list_count(*a_lst) == 0)
	{
		if ((*b_lst)->nb == get_max_val(*b_lst))
			ft_pa(a_lst, b_lst);
		else
			sort_list(a_lst, b_lst);
		return ;
	}
	if (((*a_lst)->nb < (*b_lst)->nb && list_count(*a_lst) <= 1)
		|| ((*b_lst)->nb > (*a_lst)->nb && (*b_lst)->nb < (*a_lst)->next->nb))
	{
		ft_pa(a_lst, b_lst);
		*a_lst = ft_sa(*a_lst);
		return ;
	}
	*a_lst = ft_loop(a_lst, b_lst, 0);
}
