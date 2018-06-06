/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:32:05 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/04 01:25:46 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*ft_sa(a_list *s_list)
{
	int a;
	int i;
	a_list *tmp;
	a_list *save;

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
