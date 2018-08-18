/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:45:24 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pb(t_link **s_list, t_link **b_lst)
{
	t_link *tmp;

	if (!*b_lst)
		return ;
	tmp = new_link((*b_lst)->nb);
	*b_lst = del_front((*b_lst));
	*s_list = add_link_front(*s_list, tmp);
	ft_printf("pb\n");
}
