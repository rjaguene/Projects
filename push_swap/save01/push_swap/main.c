/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 20:45:16 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/06 22:41:33 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/include/ft_printf.h"
#include "include/push_swap.h"

a_list				*ft_pars(int nb, a_list *s_list)
{
	a_list *elem;
	a_list *tmp;

	if(!(elem = (a_list*)malloc(sizeof(a_list))))
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
	//	tmp->next->prev = tmp;
		tmp->next = elem;
		return (s_list);
	}
}

int		ft_check_doubl(a_list *s_list, int last)
{
	int i;

	i = 0; // 1 si ca beug
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

int main(int argc, char **argv)
{
	a_list		*a_lst;
	a_list		*tmp;
	int			i;
	int			*v;
	i = 1;
	a_lst = NULL;
	if (ft_check(argv) == 0)
		return (ft_printf("Error\n"));
	if (argc < 2)
		return (0);
	while (argv[i])
		a_lst = ft_pars(ft_atoi_space(argv[i++]), a_lst);
	i = 0;
	tmp = a_lst;
	while (tmp)
	{
		if (ft_check_doubl(a_lst, i) == 0)
			return (ft_printf("Error\n"));
		i++;
		tmp = tmp->next;
	}
	v = lst_to_int(a_lst);
	i = 0;
	print_list(a_lst);
	i = 0;
	a_list *b_lst;
	b_lst = NULL;
//	tmp = new_link(5);
//	b_lst = add_link_front(b_lst,tmp);
	algo(v,a_lst,b_lst);
//	ft_printf("%d\n",get_nb(a_lst,0));
//	v = quicksort(v,a_lst);
/*	while (v[i])
	{
		ft_printf("%d\n",v[i]);
		i++;
	}*/
	free(v);
//	quicksort(v);
//	buble_sort(&a_lst,&b_lst);
	return 0;
}
