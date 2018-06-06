/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 20:48:32 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/05 18:01:39 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "../ft_printf/include/ft_printf.h"
#include "../ft_printf/libft/libft.h"

//s_*******

typedef struct		k_list
{
	int				nb;
	struct k_list	*next;
}					a_list;


typedef struct		c_list
{
	//int				nb;
	a_list			*front;
	a_list			*last;
}					b_list;

int			ft_atoi_space(const char *str);

a_list		*new_link(int nb);
a_list		*del_list(a_list **s_list);
a_list		*add_link_front(a_list *list, a_list *new);
a_list		*add_link_end(a_list *list, a_list *new);
a_list		*ft_sa(a_list *s_list);
a_list		*del_front(a_list *s_list);
a_list		*ft_ra(a_list *s_list);
a_list		*ft_rra(a_list *s_list);
a_list		*del_end(a_list *s_list);
void		print_list(a_list *list);
void		ft_pa(a_list **s_list, a_list **b_lst);
int			list_count(a_list *s_list);
int			ft_check_sort(a_list *s_list);
void		ft_pb(a_list **s_list, a_list **b_lst);
int			buble_sort(a_list **a_lst, a_list **b_lst);
int			ft_check(char **argv);
void		ft_visu(a_list *s_list, a_list *b_lst);
void		push_lst(a_list **s_list, b_list **b_lst);
int			*quicksort(int *v, a_list *a_lst);
int			*lst_to_int(a_list *a_lst);
#endif
