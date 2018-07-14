/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 19:23:52 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/05 17:57:36 by rojaguen         ###   ########.fr       */
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
	return (s_list);
}
