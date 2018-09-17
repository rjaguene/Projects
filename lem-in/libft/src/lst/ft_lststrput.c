/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrput.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:08:08 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:02:57 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lststrput(t_list *begin_list)
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
		ft_putendl(tmp->content);
		tmp = tmp->next;
	}
}
