/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 19:23:52 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/09 16:47:40 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*ft_rra(a_list *s_list)
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
	ft_printf("rra\n");
	return (s_list);
}
