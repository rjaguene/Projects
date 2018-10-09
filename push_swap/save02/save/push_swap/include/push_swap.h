/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 20:48:32 by rojaguen          #+#    #+#             */
/*   Updated: 2018/07/07 18:35:48 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "../ft_printf/include/ft_printf.h"
//#include "../ft_printf/libft/libft.h"
//# include "../libft/libft.h"
//s_*******
#include <stdio.h>

typedef struct		k_list
{
	int				nb;
	struct k_list	*next;
}					a_list;


typedef struct		s_struct
{
//	int				*first;
	int				*med;
	a_list			*tmp;
	a_list			*front;
	a_list			*last;
}					b_struct;

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
void		push_lst(a_list **s_list, a_list **b_lst);
int			*quicksort(int *v, a_list *a_lst);
int			*lst_to_int(a_list *a_lst);
int			get_index(a_list *a_lst, int i);
int			get_nb(a_list *a_lst, int i);
int			check_cycle(a_list *s_list, int med);
a_list		*int_to_lst(int *tab, a_list *a_lst);
a_list		*ft_pars(int nb, a_list *s_list);
a_list		*algo(a_list *a_lst, a_list *b_lst);
int			get_med(a_list *a_lst);
void		ft_split(a_list **a_lst, a_list **b_lst, int med);
int			get_max_val(a_list *a_lst);
void		put_val_front(a_list **a_lst, intmax_t nb);
void		put_val(a_list **a_lst, a_list **b_lst);
#endif
