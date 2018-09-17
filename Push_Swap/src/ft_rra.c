/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 19:23:52 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link		*ft_rra(t_link *s_list)
{
	int		a;
	t_link	*tmp;

	tmp = s_list;
	while (tmp->next)
		tmp = tmp->next;
	a = tmp->nb;
	tmp = NULL;
	tmp = new_link(a);
	s_list = add_link_front(s_list, tmp);
	s_list = del_end(s_list);
	ft_printf("rra\n");
	return (s_list);
}

t_link		*ft_rrb(t_link *s_list)
{
	int		a;
	t_link	*tmp;

	tmp = s_list;
	while (tmp->next)
		tmp = tmp->next;
	a = tmp->nb;
	tmp = NULL;
	tmp = new_link(a);
	s_list = add_link_front(s_list, tmp);
	s_list = del_end(s_list);
	ft_printf("rrb\n");
	return (s_list);
}
