/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 19:41:13 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link		*ft_ra(t_link *s_list)
{
	t_link	*tmp;
	int		a;

	tmp = NULL;
	a = s_list->nb;
	s_list = del_front(s_list);
	tmp = new_link(a);
	s_list = add_link_end(s_list, tmp);
	ft_printf("ra\n");
	return (s_list);
}

t_link		*ft_rb(t_link *s_list)
{
	t_link	*tmp;
	int		a;

	tmp = NULL;
	a = s_list->nb;
	s_list = del_front(s_list);
	tmp = new_link(a);
	s_list = add_link_end(s_list, tmp);
	ft_printf("rb\n");
	return (s_list);
}

void		ft_rr(t_link **a_lst, t_link **b_lst)
{
	t_link	*tmp;
	int		a;

	tmp = NULL;
	a = (*a_lst)->nb;
	*a_lst = del_front(*a_lst);
	tmp = new_link(a);
	*a_lst = add_link_end(*a_lst, tmp);
	tmp = NULL;
	a = (*b_lst)->nb;
	*b_lst = del_front(*b_lst);
	tmp = new_link(a);
	*b_lst = add_link_end(*b_lst, tmp);
	ft_printf("rr\n");
}
