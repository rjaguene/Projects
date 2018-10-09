/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stdin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:14:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/09 16:34:49 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static	int		ret(void)
{
	ft_putstr("Too many ants. Must be betwen 1 to 100 000 ants\n");
	return (0);
}

static int		line_get_ants(t_env *env)
{
	char		*first_line;
	int			ants_from_file;

	if (get_next_line(0, &first_line))
	{
		if (ft_isnumber(first_line) && ft_isinteger(first_line))
		{
			ants_from_file = ft_atoi(first_line);
			if (ants_from_file <= 0 || ants_from_file > 100000)
				exit(ret());
			env->total_ants = ants_from_file;
			ft_putendl(first_line);
		}
		else
			exit(error());
	}
	else
		exit(error());
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
		if (line && *line && line_handle(env, &parser, line) == 1)
		{
			ft_strdel(&line);
			return (1);
		}
		else if (!*line)
		{
			ft_strdel(&line);
			exit(error());
		}
		ft_putendl(line);
		ft_strdel(&line);
	}
	ft_strdel(&line);
	return (0);
}
