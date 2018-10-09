/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 14:34:43 by rojaguen          #+#    #+#             */
/*   Updated: 2018/10/07 19:16:44 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		ft_free_lst(t_link **lst)
{
	t_link *tmp;
	t_link *tmp2;

	tmp2 = *lst;
	tmp = *lst;
	if (lst)
	{
		while (tmp)
		{
			tmp2 = tmp2->next;
			free(tmp->name);
			free(tmp);
			tmp = tmp2;
		}
	}
	return (1);
}

int		free_lst(t_link **lst)
{
	t_link *tmp;
	t_link *tmp2;

	tmp2 = *lst;
	tmp = *lst;
	if (lst)
	{
		while (tmp)
		{
			tmp2 = tmp2->next;
			free(tmp->name);
			free(tmp);
			tmp = tmp2;
		}
	}
	return (1);
}
