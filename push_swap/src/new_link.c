/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 18:22:25 by rojaguen          #+#    #+#             */
/*   Updated: 2018/05/28 19:31:02 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

a_list		*new_link(int nb)
{
	a_list *new;

	if (!(new = malloc(sizeof(new))))
		return (NULL);
	new->nb = nb;
	new->next = NULL;
	return (new);
}
