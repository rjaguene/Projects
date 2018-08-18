/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:26:27 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_split(t_link **a_lst, t_link **b_lst, int med)
{
	int i;

	i = get_max_val(*a_lst);
	if ((*a_lst)->nb == i)
		*a_lst = ft_ra(*a_lst);
	while (check_cycle(*a_lst, med) && list_count(*a_lst) > 3)
	{
		if ((*a_lst)->nb >= med && (*a_lst)->nb != i)
			*a_lst = ft_ra(*a_lst);
		else
			ft_pb(b_lst, a_lst);
		i++;
		if (*b_lst && (*b_lst)->nb < get_med(*b_lst))
			*b_lst = ft_rb(*b_lst);
		if (*b_lst && ((*b_lst)->next) && (*b_lst)->nb < (*b_lst)->next->nb)
			*b_lst = ft_sb(*b_lst);
	}
}
