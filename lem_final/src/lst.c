/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:12:59 by rojaguen          #+#    #+#             */
/*   Updated: 2018/09/19 16:44:59 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_link		*add_link_front(t_link *list, t_link *new)
{
	new->next = list;
	list = new;
	return (list);
}

t_link		*new_link(int nb, char *name)
{
	t_link *new;

	new = NULL;
	if (!(new = (t_link*)malloc(sizeof(*new))))
		return (NULL);
	new->visit = 0;
	new->name = ft_strdup(name);
	new->id_ant = 0;
	new->id_room = nb;
	new->next = NULL; 
	return (new);
}

t_link		*add_link_end(t_link *s_list, t_link *new)
{
	t_link *tmp;

	if (s_list == NULL)
		return (new);
	else
	{
		tmp = s_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (s_list);
}