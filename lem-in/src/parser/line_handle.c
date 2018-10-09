/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:14:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/08 17:08:54 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static int			handle_command(t_parser *parser, int command_code)
{
	if (command_code <= 0)
		return (1);
	else if (command_code == IS_CMD_START)
	{
		parser->next_is_end = FALSE;
		parser->next_is_start = TRUE;
	}
	else if (command_code == IS_CMD_END)
	{
		parser->next_is_start = FALSE;
		parser->next_is_end = TRUE;
	}
	return (0);
}

static int			handle_node(t_env *env, t_parser *parser, char *line,
	int pos_space)
{
	char		*node_name;
	int			existing_id;

	node_name = ft_strsub(line, 0, pos_space);
	existing_id = node_getid(GRAPH.lst_nodes, node_name);
	if (existing_id == -1)
	{
		node_add(&env->graph, node_new(GRAPH.nb_nodes, node_name));
		if (parser->next_is_start)
		{
			GRAPH.id_start = GRAPH.nb_nodes - 1;
			parser->next_is_start = FALSE;
		}
		else if (parser->next_is_end)
		{
			GRAPH.id_end = GRAPH.nb_nodes - 1;
			parser->next_is_end = FALSE;
		}
	}
	else
		return (ft_strdel(&node_name));
	ft_strdel(&node_name);
	return (existing_id == -1 ? 0 : 1);
}

static int			handle_edge(t_graph *graph, int **ids)
{
	if (!ids)
		return (1);
	graph->check = 1;
	adjacency_new_edge(graph, (*ids)[0], (*ids)[1]);
	free(*ids);
	*ids = NULL;
	return (0);
}

int					line_handle(t_env *env, t_parser *parser, char *line)
{
	int		*ids;
	int		ret;

	if (line_iscomment(line))
	{
		return (0);
	}
	else if ((ret = line_iscommand(line)) > 0)
	{
		return (handle_command(parser, ret));
	}
	else if ((ret = line_isnode(line)) > 0)
		return (handle_node(env, parser, line, ret));
	else if (!parser->adjacency_created)
	{
		if (adjacency_init(&GRAPH) == 1)
			return (1);
		parser->adjacency_created = TRUE;
	}
	if ((ids = line_isedge(GRAPH.lst_nodes, line)) != NULL)
		return (handle_edge(&GRAPH, &ids));
	return (1);
}
