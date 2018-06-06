/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:52:35 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/06 17:57:20 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*int_to_lst(int *tab, a_list *a_lst)
{
	int		i; //CA MARCHE PAS !
	a_list	*tmp;

	i = 0;
//	ft_printf("lol");
	if (a_lst)
		del_list(&a_lst);
//	ft_printf("lol");
	while (tab[i])
	{
		a_lst = ft_pars(tab[i], a_lst);
		i++;
	}
		ft_printf("dd");
	return (a_lst);
}
