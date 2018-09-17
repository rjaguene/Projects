/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:14:14 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/09 17:05:04 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			line_iscomment(char *line)
{
	return (line && (line[0] == '#') && (line[1] != '#'));
}

int			line_iscommand(char *line)
{
	if (!line)
		return (FALSE);
	if (line[0] == '#' && line[1] == '#')
	{
		if (ft_strcmp(line + 2, "start") == 0)
			return (IS_CMD_START);
		if (ft_strcmp(line + 2, "end") == 0)
			return (IS_CMD_END);
		return (IS_CMD_OTHER);
	}
	return (FALSE);
}

int			line_isnode(char *line)
{
	int 	i;
	int 	pos_space;

	if (!line)
		return (FALSE);
	i = 0;
	while (line[i] && (line[i] != ' ') && (line[i] != 'L'))
		i++;
	if (line[i] != ' ')
		return (FALSE);
	pos_space = i;
	i++;
	while (line[i] && ft_isdigit(line[i]))
		i++;
	if (line[i] != ' ')
		return (FALSE);
	i++;
	if (line[i] && ft_isdigit(line[i]))
	{
		while (line[i] && ft_isdigit(line[i]))
			i++;
		return (line[i] == '\0' ? pos_space : -1);
	}
	return (FALSE);
}

static int 	*get_ids(t_list *lst_nodes, char *line, int i)
{
	int 	*ids;
	char	*node_name_a;
	char 	*node_name_b;

	if (!lst_nodes || !line)
		return (NULL);
	ids = malloc(sizeof(int) * 2);
	node_name_a = ft_strsub(line, 0, i);
	node_name_b = line + i + 1;
	ids[0] = node_getid(lst_nodes, node_name_a);
	ids[1] = node_getid(lst_nodes, node_name_b);
	ft_strdel(&node_name_a);
	if ((ids[0] != -1) && (ids[0] != -1))
		return (ids);
	free(ids);
	return (NULL);
}

int			*line_isedge(t_list *lst_nodes, char *line)
{
	int 	*ids;
	int 	i;

	if (!lst_nodes || !line)
		return (NULL);
	i = 0;
	ids = NULL;
	while (line[i])
	{
		while (line[i] && line[i] != '-')
			i++;
		if (line[i] == '-')
		{
			ids = get_ids(lst_nodes, line, i);
			if (ids)
				return (ids);
		}
		i++;
	}
	return (NULL);
}
