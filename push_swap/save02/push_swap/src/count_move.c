/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:06:15 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/14 12:42:18 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		count_move(a_list *a_lst, a_list *b_lst, int nb)
{
	a_list	*a_tmp;
	a_list	*b_tmp;
	int		*i;

	a_tmp = a_lst;
	b_tmp = b_lst;

	*i = 0;
	while (list_count(a_lst) != 2)
		ft_split(&a_lst, &b_lst,get_med(a_lst));
	while (list_count(b_lst) != 0 || ft_check_sort(a_lst) != 0)
	{
		if (a_lst->nb > a_lst->next->nb)
			a_lst = sa(a_lst, &i);
		put_val_count(&a_lst, &b_lst, i);
		*i = 0;
	}
	ft_visu(a_lst,b_lst);
	ft_printf("%d\n ont est la",*i);
	return (0);
}
