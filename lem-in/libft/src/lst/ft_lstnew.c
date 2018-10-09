/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:58:10 by akhercha          #+#    #+#             */
/*   Updated: 2018/10/08 14:11:20 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*fresh;

	if (!(fresh = malloc(sizeof(*fresh))))
		exit(0);
	if (content)
	{
		if (!(fresh->content = malloc(content_size)))
			exit(0);
		ft_memcpy(fresh->content, content, content_size);
		fresh->content_size = content_size;
	}
	else
	{
		fresh->content = NULL;
		fresh->content_size = 0;
	}
	fresh->next = NULL;
	return (fresh);
}
