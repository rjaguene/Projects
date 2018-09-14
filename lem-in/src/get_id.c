/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_id.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 13:20:35 by rojaguen          #+#    #+#             */
/*   Updated: 2018/09/14 15:16:41 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

/*
* get id : Renvois l'id du node correspondant a la poss du graph
* put_visited : met le node sur visited : 0 non visite, 1 visite
*/

void	put_visited(t_list *lst, int id)
{
	t_node			*current;

	while (lst)
	{
		current = (t_node *)(lst)->content;
		if (current)
			if (current->id == id)
			{
				current->visited = 1;
				return ;
			}
		(lst) = (lst)->next;
	}
	return ;
}

int		get_id(t_list *lst, int **graph, int i, int a)
{
	int				id;
	t_node			*current;

	id = 0;
	a++;
	a++;
	while (lst && a--)
	{
		current = (t_node *)lst->content;
		if (current)
			if (a == 0)
			{
				id = current->id;
				return (id);
			}
		lst = lst->next;
	}
	return (-1);
}
