/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:19:29 by rojaguen          #+#    #+#             */
/*   Updated: 2018/10/07 14:19:49 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_node				*node_get_byid(t_list *lst_nodes, int id)
{
	t_node			*current_node;

	while (lst_nodes)
	{
		current_node = (t_node *)lst_nodes->content;
		if (current_node)
			if (current_node->id == id)
				return (current_node);
		lst_nodes = lst_nodes->next;
	}
	return (NULL);
}

char				*node_getname_byid(t_list *lst_nodes, int id)
{
	t_node		*node;

	node = node_get_byid(lst_nodes, id);
	if (!node)
		return (NULL);
	return (node->name);
}
