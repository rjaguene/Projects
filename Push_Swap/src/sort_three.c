/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:34:19 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/16 19:50:34 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_link **a_lst)
{
	while (ft_check_sort(*a_lst) == 1)
	{
		if ((*a_lst)->nb < (*a_lst)->next->nb
				&& ((*a_lst)->nb > (*a_lst)->next->next->nb))
			*a_lst = ft_rra(*a_lst);
		if ((*a_lst)->nb > (*a_lst)->next->next->nb)
			*a_lst = ft_ra(*a_lst);
		if ((*a_lst)->nb > (*a_lst)->next->nb)
			*a_lst = ft_sa(*a_lst);
		if ((*a_lst)->next->nb > (*a_lst)->nb
			&& (*a_lst)->next->nb > (*a_lst)->next->next->nb)
		{
			*a_lst = ft_sa(*a_lst);
			*a_lst = ft_ra(*a_lst);
		}
	}
}
