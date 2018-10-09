/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:22:25 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/19 16:03:55 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_link		*new_link(int nb)
{
	t_link *new;

	new = NULL;
	if (!(new = (t_link*)malloc(sizeof(*new))))
		return (NULL);
	new->nb = nb;
	new->next = NULL;
	return (new);
}
