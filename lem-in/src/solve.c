/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 10:09:11 by rojaguen          #+#    #+#             */
/*   Updated: 2018/09/14 15:39:44 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		*get_path(t_env *env, int **graph, int i, int a)
{
	int *v;

	return (v);
}

int		solve(t_env *env, int **graph)
{
	int a;
	int i;

	i = 0;
	a = 0;
	put_visited(GRAPH.lst_nodes, 0);
	while (i < GRAPH.nb_nodes)
	{
		while (a < GRAPH.nb_nodes && graph[i][a] != 1)
			a++;
		if (graph[i][a] == 1 && a < GRAPH.nb_nodes)
		{
			printf("id = %d\n",get_id(env->graph.lst_nodes, env->graph.adjacency, i, a));
			put_visited(GRAPH.lst_nodes, get_id(GRAPH.lst_nodes, GRAPH.adjacency, i, a));
			node_putlst(GRAPH.lst_nodes);
			graph[i][a] = 0;
			a++;
		}
		if (a >= GRAPH.nb_nodes)
		{
			a = 0;
			i++;
		}
	}
	return (0);
}
