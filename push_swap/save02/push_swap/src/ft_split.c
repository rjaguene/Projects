/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:26:27 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/12 19:00:38 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_split(a_list **a_lst, a_list **b_lst, int med)
{
	intmax_t i;

	i = get_max_val(*a_lst);
	if ((*a_lst)->nb == i)
		*a_lst = ft_ra(*a_lst);
	while (check_cycle(*a_lst, med))
	{
		if ((*a_lst)->nb == i)
			*a_lst = ft_ra(*a_lst);;
		if ((*a_lst)->nb >= med && (*a_lst)->nb != i)
			*a_lst = ft_ra(*a_lst);
		else
			ft_pb(b_lst, a_lst); //RECEPTEUR / ENVOYEUR 
		i++;
	}
}
