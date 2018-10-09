/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 22:40:48 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/08 14:10:37 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/lem_in.h"

void				ft_lstdelfirst(t_list **lst)
{
	t_list			*new_begin;
	t_list			*save;

	if (!*lst)
		return ;
	save = *lst;
	new_begin = (*lst)->next;
	*lst = new_begin;
	free(save->content);
	free(save);
}
