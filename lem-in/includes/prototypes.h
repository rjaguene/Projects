/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:00:04 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/14 15:16:40 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H
# include "structs.h"

int				env_init(t_env *env);
int 			graph_init(t_graph *graph);
int 			adjacency_init(t_graph *graph);
void 			parser_init(t_parser *parser);

t_node			*node_new(int id, char *name);
int				node_add(t_graph *graph, t_node *node);
int				node_getid(t_list *lst_nodes, char *name);
int				node_are_linked(t_graph *graph, int id_a, int id_b);
t_node			*node_get_byid(t_list *lst_nodes, int id);
int				node_setants(t_list *lst_nodes, int id, int nb_ants);
void			node_putlst(t_list *lst_nodes);

int				adjacency_new_edge(t_graph *graph, int id_a, int id_b);
void			adjacency_put(t_graph *graph);

int				parse_stdin(t_env *env);
int 			line_handle(t_env *env, t_parser *parser, char *line);
int 			line_iscomment(char *line);
int				line_iscommand(char *line);
int				line_isnode(char *line);
int				*line_isedge(t_list *list, char *line);

int				solve(t_env *env, int **graph);
int				get_id(t_list *lst, int **graphe, int i, int a);
void			put_visited(t_list *lst, int id);
#endif
