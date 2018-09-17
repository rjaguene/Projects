/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:18:56 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link		*sa(t_link *s_list)
{
	int		a;
	int		i;
	t_link	*tmp;
	t_link	*save;

	if (!s_list)
		return (s_list);
	save = s_list;
	tmp = s_list;
	i = s_list->nb;
	if (list_count(s_list) <= 1)
		return (s_list);
	i = s_list->nb;
	tmp = tmp->next;
	a = tmp->nb;
	s_list->nb = a;
	s_list = s_list->next;
	s_list->nb = i;
	return (save);
}

t_link		*sb(t_link *s_list)
{
	int		a;
	int		i;
	t_link	*tmp;
	t_link	*save;

	save = s_list;
	if (!s_list)
		return (s_list);
	if (list_count(s_list) <= 1)
		return (s_list);
	tmp = s_list;
	i = s_list->nb;
	i = s_list->nb;
	tmp = tmp->next;
	a = tmp->nb;
	s_list->nb = a;
	s_list = s_list->next;
	s_list->nb = i;
	return (save);
}

void		pb(t_link **s_list, t_link **b_lst)
{
	t_link *tmp;

	if (!*b_lst)
		return ;
	tmp = new_link((*b_lst)->nb);
	*b_lst = del_front((*b_lst));
	*s_list = add_link_front(*s_list, tmp);
}
