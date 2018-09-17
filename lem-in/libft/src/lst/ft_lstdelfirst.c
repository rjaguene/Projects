/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:35:58 by akhercha          #+#    #+#             */
/*   Updated: 2018/09/13 15:04:58 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                ft_lstdelfirst(t_list **alst)
{
    t_list          *tmp;

	if (!*alst)
		return ;
    tmp = (*alst)->next;
    free(alst);
    *alst = tmp;
}