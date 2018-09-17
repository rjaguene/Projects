/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:13:01 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/14 22:45:51 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_node          *node_get_byid(t_list *lst_nodes, int id)
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

char			*node_getname_byid(t_list *lst_nodes, int id)
{
	t_node		*node;

	node = node_get_byid(lst_nodes, id);
	if (!node)
		return (NULL);
	return (node->name);
}
