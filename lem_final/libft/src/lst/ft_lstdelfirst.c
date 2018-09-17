/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 22:40:48 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/14 22:41:33 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdelfirst(t_list **lst)
{
	t_list			*new_begin;

	if (!*lst)
		return ;
	new_begin = (*lst)->next;
	*lst = new_begin;
}
