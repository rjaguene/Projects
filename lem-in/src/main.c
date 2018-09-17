/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:14:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/14 13:24:16 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int					main(void)
{
	t_env			env;

	if (env_init(&env) == 1)
		ft_errormsg(1, MSG_ERROR);
	parse_stdin(&env);
	node_setants(env.graph.lst_nodes, env.graph.id_start, env.total_ants);
	ft_putchar('\n'); /* separation between the map & the result */
	node_putlst(env.graph.lst_nodes);
	adjacency_put(&env.graph); /* test */
	solve(&env, env.graph.adjacency);
	return (0);
}
