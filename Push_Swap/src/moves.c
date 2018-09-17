/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:13:39 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/16 16:01:19 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		pa(t_link **s_list, t_link **b_lst)
{
	t_link	*tmp;

	if (!*b_lst)
		return ;
	tmp = new_link((*b_lst)->nb);
	*b_lst = del_front((*b_lst));
	*s_list = add_link_front(*s_list, tmp);
}

t_link		*ra(t_link *s_list)
{
	t_link	*tmp;
	int		a;

	if (!s_list)
		return (s_list);
	tmp = NULL;
	a = s_list->nb;
	s_list = del_front(s_list);
	tmp = new_link(a);
	s_list = add_link_end(s_list, tmp);
	return (s_list);
}

t_link		*rb(t_link *s_list)
{
	t_link	*tmp;
	int		a;

	if (!s_list)
		return (s_list);
	tmp = NULL;
	a = s_list->nb;
	s_list = del_front(s_list);
	tmp = new_link(a);
	s_list = add_link_end(s_list, tmp);
	return (s_list);
}

t_link		*rra(t_link *s_list)
{
	int		a;
	t_link	*tmp;

	if (!s_list)
		return (s_list);
	tmp = s_list;
	while (tmp->next)
		tmp = tmp->next;
	a = tmp->nb;
	tmp = NULL;
	tmp = new_link(a);
	s_list = add_link_front(s_list, tmp);
	s_list = del_end(s_list);
	return (s_list);
}

t_link		*rrb(t_link *s_list)
{
	int		a;
	t_link	*tmp;

	if (!s_list)
		return (s_list);
	tmp = s_list;
	while (tmp->next)
		tmp = tmp->next;
	a = tmp->nb;
	tmp = NULL;
	tmp = new_link(a);
	s_list = add_link_front(s_list, tmp);
	s_list = del_end(s_list);
	return (s_list);
}
