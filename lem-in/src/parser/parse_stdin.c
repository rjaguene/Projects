/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stdin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:14:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/09 17:12:42 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static int		line_get_ants(t_env *env)
{
	char		*first_line;
	int			ants_from_file;

	if (get_next_line(0, &first_line))
	{
		if (ft_isnumber(first_line) && ft_isinteger(first_line))
		{
			ants_from_file = ft_atoi(first_line);
			env->total_ants = ants_from_file;
			ft_putendl(first_line);
		}
	}
	ft_strdel(&first_line);
	return (env->total_ants <= 0);
}

int				parse_stdin(t_env *env)
{
	char		*line;
	t_parser	parser;

	parser_init(&parser);
	if (line_get_ants(env) == 1)
		return (1);
	while (get_next_line(0, &line))
	{	
		if (line_handle(env, &parser, line) == 1)
		{
			ft_strdel(&line);
			return (1);
		}
		ft_putendl(line);
		ft_strdel(&line);
	}
	ft_strdel(&line);
	return (0);
}
