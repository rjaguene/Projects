/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:11:44 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/13 16:45:10 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*ra(a_list *s_list, int **i)
{
	a_list	*tmp;
	int		a;


	tmp = NULL;
	a = s_list->nb;
	s_list = del_front(s_list);
	tmp = new_link(a);
	s_list = add_link_end(s_list, tmp);
	(**i)++;
	return (s_list);
}

void	pa(a_list **s_list, a_list **b_lst, int **i)
{
	a_list *tmp;

	if (!*b_lst)
		return ;
	tmp = new_link((*b_lst)->nb);
	*b_lst = del_front((*b_lst));
	*s_list = add_link_front(*s_list, tmp);
	(**i)++;
}

void	pb(a_list **s_list, a_list **b_lst, int **i)
{
	a_list *tmp;

	if (!*b_lst)
		return ;
	tmp = new_link((*b_lst)->nb);
	*b_lst = del_front((*b_lst));
	*s_list = add_link_front(*s_list, tmp);
	(**i)++;
//	printf("%d",(*st)->move);
}

a_list		*rra(a_list *s_list, int **i)
{
	int		a;
	a_list	*tmp;

	tmp = s_list;
	while (tmp->next)
		tmp = tmp->next;
	a = tmp->nb;
	tmp = NULL;
	tmp = new_link(a);
	s_list = add_link_front(s_list, tmp);
	s_list = del_end(s_list);
	(**i)++;
	return (s_list);
}

a_list		*sa(a_list *s_list, int **b)
{
	int		a;
	int		i;
	a_list	*tmp;
	a_list	*save;

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
	(**b)++;
	return (save);
}
