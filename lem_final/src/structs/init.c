/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:01:23 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/10 14:09:35 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			env_init(t_env *env)
{
	env->total_ants = -1;
	if (graph_init(&env->graph) == 1)
		return (1);
	return (0);
}

int 		graph_init(t_graph *graph)
{
	graph->nb_nodes = 0;
	if (!(graph->lst_nodes = ft_lstnew(NULL, 0)))
		return (1);
	graph->adjacency = NULL;
	graph->id_start = -1;
	graph->id_end = -1;
	return (0);
}

int 		adjacency_init(t_graph *graph)
{
	int 	y;
	int 	x;

	if (!(graph->nb_nodes > 1 && graph->id_start >= 0 && graph->id_end >= 0))
		return (1);
	if (!(graph->adjacency = malloc(sizeof(int*) * graph->nb_nodes)))
		return (1);
	y = 0;
	while (y < graph->nb_nodes)
	{
		if (!(graph->adjacency[y] = malloc(sizeof(int) * graph->nb_nodes)))
			return (1);
		x = 0;
		while (x < graph->nb_nodes)
			graph->adjacency[y][x++] = 0;
		y++;
	}
	return (0);
}

void 		parser_init(t_parser *parser)
{
	parser->adjacency_created = FALSE;
	parser->next_is_start = FALSE;
	parser->next_is_end = FALSE;
}
