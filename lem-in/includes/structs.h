/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:00:04 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/14 10:14:01 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct		s_node
{
	int				id;
	char			*name;
	int				nb_ants;
	int				visited;
}					t_node;

typedef struct 		s_graph
{
	int				nb_nodes;
	t_list			*lst_nodes;
	int				**adjacency;
	int				id_start;
	int				id_end;
}					t_graph;

typedef struct		s_env
{
	int				total_ants;
	t_graph			graph;
}					t_env;

typedef struct 		s_parser
{
	int				adjacency_created;
	int				next_is_start;
	int				next_is_end;
}					t_parser;

#endif
