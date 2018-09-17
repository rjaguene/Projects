/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:11:26 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/17 16:03:00 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link			*ft_pars(int nb, t_link *s_list)
{
	t_link *elem;
	t_link *tmp;

	if (!(elem = (t_link*)malloc(sizeof(t_link))))
		return (NULL);
	if (nb)
		elem->nb = nb;
	elem->next = NULL;
	if (s_list == NULL)
		return (elem);
	else
	{
		tmp = s_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = elem;
		return (s_list);
	}
}

int				ft_check_doubl(t_link *s_list, int last)
{
	int i;

	i = 0;
	if (!s_list)
		return (1);
	while (s_list && i < last)
	{
		s_list = s_list->next;
		i++;
	}
	if (s_list)
	{
		i = s_list->nb;
		s_list = s_list->next;
	}
	else
		return (1);
	while (s_list)
	{
		if (s_list->nb == i)
			return (0);
		s_list = s_list->next;
	}
	return (1);
}

int				ft_move(char *s, t_link **a_lst, t_link **b_lst)
{
	if (!s || !*s)
		return (1);
	if (ft_strequ(s, "pa") == 1)
		pa(a_lst, b_lst);
	else if (ft_strequ(s, "pb") == 1)
		pb(b_lst, a_lst);
	else if (ft_strequ(s, "sa") == 1)
		*a_lst = sa(*a_lst);
	else if (ft_strequ(s, "sb") == 1)
		*b_lst = sb(*b_lst);
	else if (ft_strequ(s, "ra") == 1)
		*a_lst = ra(*a_lst);
	else if (ft_strequ(s, "rb") == 1)
		*b_lst = rb(*b_lst);
	else if (ft_strequ(s, "rra") == 1)
		*a_lst = rra(*a_lst);
	else if (ft_strequ(s, "rrb") == 1)
		*b_lst = rrb(*b_lst);
	else if (other_move(s, a_lst, b_lst) == 1)
		return (1);
	else
		return (0);
	return (1);
}

int				solver(t_link *a_lst, char *s, t_link *b_lst, int ret)
{
	while ((ret = get_next_line(0, &s)) != 0)
	{
		if (ret == -1)
			break ;
		if (ft_move(s, &a_lst, &b_lst) == 0)
		{
			ft_strdel(&s);
			ft_free_lst(&a_lst, &b_lst);
			return (ft_printf("Error\n"));
		}
		ft_strdel(&s);
	}
	ft_strdel(&s);
	if (ft_check_sort(a_lst) == 1 || list_count(b_lst) != 0)
	{
		ft_free_lst(&a_lst, &b_lst);
		return (ft_printf("KO\n"));
	}
	return (ft_free_lst(&a_lst, &b_lst));
}

int				main(int argc, char **argv)
{
	t_link		*a_lst;
	t_link		*tmp;
	int			i;

	i = 0;
	a_lst = NULL;
	if (argc < 2)
		return (0);
	if (ft_check(argv) == 0)
		return (ft_printf("Error\n"));
	a_lst = pars_arg(argv, a_lst, 1, 0);
	tmp = a_lst;
	while (tmp)
	{
		if (ft_check_doubl(a_lst, i) == 0 || !a_lst)
		{
			ft_free_lst(&a_lst, NULL);
			return (ft_printf("Error\n"));
		}
		i++;
		tmp = tmp->next;
	}
	if (solver(a_lst, NULL, NULL, 0) == 1)
		ft_printf("OK\n");
	return (0);
}
