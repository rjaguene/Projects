/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:41:26 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/06 16:46:27 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		get_nb(a_list *a_lst, int i)
{
	while (i-- && a_lst->next)
		a_lst = a_lst->next;
	if (a_lst->next == NULL)
		return (-1);
	return (a_lst->nb);
}
