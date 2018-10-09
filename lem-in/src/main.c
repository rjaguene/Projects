/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:14:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/09 16:34:13 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static int			*get_path(t_env *env, int *prev)
{
	int				*path;
	int				id_tmp;
	int				i;

	i = 0;
	path = malloc(sizeof(int) * GRAPH.nb_nodes);
	ft_intarr_init(path, GRAPH.nb_nodes, -1);
	id_tmp = GRAPH.id_end;
	path[i++] = GRAPH.id_end;
	while (prev[id_tmp] != -1)
	{
		path[i++] = prev[id_tmp];
		id_tmp = prev[id_tmp];
	}
	return (path);
}

static void			init_bfs(t_env *env, t_list **queue,
		int *visited, int *prev)
{
	*queue = ft_lstnew(&(GRAPH.id_start), sizeof(int *));
	ft_intarr_init(visited, GRAPH.nb_nodes, FALSE);
	ft_intarr_init(prev, GRAPH.nb_nodes, -1);
	visited[GRAPH.id_start] = TRUE;
}

static int			*bfs(t_env *env, int i, int id_tmp, t_list *queue)
{
	int				visited[GRAPH.nb_nodes];
	int				prev[GRAPH.nb_nodes];

	init_bfs(env, &queue, visited, prev);
	while (queue)
	{
		id_tmp = *(int *)(queue->content);
		ft_lstdelfirst(&queue);
		i = 0;
		while (i < GRAPH.nb_nodes)
		{
			if ((GRAPH.adjacency[id_tmp][i]) && (i != id_tmp)
				&& (visited[i] == FALSE))
			{
				visited[i] = TRUE;
				prev[i] = id_tmp;
				if (queue)
					ft_lstadd(&queue, ft_lstnew(&i, sizeof(int *)));
				else
					queue = ft_lstnew(&i, sizeof(int *));
			}
			i++;
		}
	}
	return (get_path(env, prev));
}

int					main(void)
{
	t_env			env;
	int				*path;

	path = NULL;
	if (env_init(&env) == 1)
		ft_errormsg(1, MSG_ERROR);
	if (parse_stdin(&env) == 1)
		exit(error());
	if (env.graph.check == 0)
		exit(error());
	path = bfs(&env, 0, 0, NULL);
	print_ants(&env, path, 0);
	exit(0);
	return (0);
}
