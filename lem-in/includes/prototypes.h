/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:00:04 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/09 16:43:00 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H
# include "structs.h"

int				env_init(t_env *env);
int				graph_init(t_graph *graph);
int				adjacency_init(t_graph *graph);
void			parser_init(t_parser *parser);

t_node			*node_new(int id, char *name);
int				node_add(t_graph *graph, t_node *node);
int				node_getid(t_list *lst_nodes, char *name);
int				node_are_linked(t_graph *graph, int id_a, int id_b);
t_node			*node_get_byid(t_list *lst_nodes, int id);
char			*node_getname_byid(t_list *lst_nodes, int id);
int				node_setants(t_list *lst_nodes, int id, int nb_ants);
void			node_putlst(t_list *lst_nodes);

int				adjacency_new_edge(t_graph *graph, int id_a, int id_b);
void			adjacency_put(t_graph *graph);

int				parse_stdin(t_env *env);
int				line_handle(t_env *env, t_parser *parser, char *line);
int				line_iscomment(char *line);
int				line_iscommand(char *line);
int				line_isnode(char *line);
int				*line_isedge(t_list *list, char *line);
void			print_ants(t_env *env, int *path, int i);

t_link			*add_link_front(t_link *list, t_link *new);
t_link			*new_link(int nb, char *name);
t_link			*add_link_end(t_link *s_list, t_link *new);
t_link			*init_nd(int *path, t_link *lst, t_link *tmp, t_env *env);
int				*init(int *path, int tmp, int *b, t_env *env);
t_link			*intit_nd(int *path, t_link *lst, t_link *tmp, t_env *env);
void			print_room(t_link *tmp);
void			ants_moove(t_link *lst, t_link *tmp, t_env *env, int ants);
void			print(t_link *lst, t_link *tmp, int i, int a);
int				ft_free_lst(t_link **lst);
int				get_max(t_link *lst);
int				is_end(t_link *lst);
t_link			*get_nd(t_link *lst, int i);
int				error();

#endif
