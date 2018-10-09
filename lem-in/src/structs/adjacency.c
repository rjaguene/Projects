/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjacency.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:14:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/07 14:08:58 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int					adjacency_new_edge(t_graph *graph, int id_a, int id_b)
{
	if (!graph || (id_a < 0) || (id_a >= graph->nb_nodes)
			|| (id_b < 0) || (id_b >= graph->nb_nodes))
		return (1);
	graph->adjacency[id_a][id_b] = 1;
	graph->adjacency[id_b][id_a] = 1;
	return (0);
}

void				adjacency_put(t_graph *graph)
{
	int			y;
	int			x;

	if (!graph || !graph->adjacency)
		return ;
	y = 0;
	while (y < graph->nb_nodes)
	{
		x = 0;
		while (x < graph->nb_nodes)
		{
			ft_putnbr(graph->adjacency[y][x]);
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
