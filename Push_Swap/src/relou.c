/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relou.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 17:02:56 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/17 15:31:25 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		other_move(char *s, t_link **a_lst, t_link **b_lst)
{
	if (ft_strequ(s, "ss") == 1)
	{
		*a_lst = sa(*a_lst);
		*b_lst = sb(*b_lst);
	}
	else if (ft_strequ(s, "rr") == 1)
	{
		*a_lst = ra(*a_lst);
		*b_lst = rb(*b_lst);
	}
	else if (ft_strequ(s, "rrr") == 1)
	{
		*a_lst = rra(*a_lst);
		*b_lst = rrb(*b_lst);
	}
	else
		return (0);
	return (1);
}
