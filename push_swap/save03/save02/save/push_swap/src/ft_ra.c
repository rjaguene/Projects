/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 19:41:13 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/05 17:57:43 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*ft_ra(a_list *s_list)
{
	a_list	*tmp;
	int		a;


	tmp = NULL;
	a = s_list->nb;
	s_list = del_front(s_list);
	tmp = new_link(a);
	s_list = add_link_end(s_list, tmp);
	return (s_list);
}
