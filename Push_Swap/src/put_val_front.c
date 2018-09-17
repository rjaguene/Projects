/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_val_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:03:21 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		put_val_front(t_link **a_lst, int nb)
{
	t_link	*tmp;
	int		i;

	tmp = *a_lst;
	i = list_count(*a_lst);
	if (get_index(*a_lst, nb) > i / 2)
	{
		while ((*a_lst)->nb != nb)
			*a_lst = ft_rra(*a_lst);
		return ;
	}
	while ((*a_lst)->nb != nb)
		*a_lst = ft_ra(*a_lst);
}
