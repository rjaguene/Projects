/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:14:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/07 14:19:14 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_node				*node_new(int id, char *name)
{
	t_node			*new;

	if (!(new = malloc(sizeof(t_node))))
		return (NULL);
	new->id = id;
	if (!(new->name = ft_strdup((const char*)name)))
		return (NULL);
	new->nb_ants = 0;
	return (new);
}

int					node_add(t_graph *graph, t_node *node)
{
	t_list			*to_add;

	if (!(to_add = ft_lstnew(node, sizeof(t_node))))
		return (1);
	ft_lstadd(&(graph->lst_nodes), to_add);
	graph->nb_nodes++;
	free(node);
	return (0);
}

int					node_getid(t_list *lst_nodes, char *name)
{
	t_node			*current_node;

	while (lst_nodes)
	{
		current_node = (t_node *)lst_nodes->content;
		if (current_node)
		{
			if (ft_strcmp(current_node->name, name) == 0)
				return (current_node->id);
		}
		lst_nodes = lst_nodes->next;
	}
	return (-1);
}

int					node_are_linked(t_graph *graph, int id_a, int id_b)
{
	if ((id_a < 0) || (id_a >= graph->nb_nodes) ||
		(id_b < 0) || (id_b >= graph->nb_nodes))
		return (-1);
	return (graph->adjacency[id_a][id_b] || graph->adjacency[id_b][id_a]);
}
