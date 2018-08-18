/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:32:44 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/12 17:13:35 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link		*ft_sb(t_link *s_list)
{
	int		a;
	int		i;
	t_link	*tmp;
	t_link	*save;

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
	ft_printf("sb\n");
	return (save);
}
