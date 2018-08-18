/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 14:34:43 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/17 13:25:32 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free2(t_link ***lst_b)
{
	t_link *tmp;
	t_link *tmp2;

	if (lst_b)
	{
		tmp2 = **lst_b;
		tmp = **lst_b;
		while (tmp)
		{
			tmp2 = tmp2->next;
			free(tmp);
			tmp = tmp2;
		}
	}
}

int		ft_free_lst(t_link **lst, t_link **lst_b)
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
			free(tmp);
			tmp = tmp2;
		}
	}
	if (lst_b)
		free2(&lst_b);
	return (1);
}
