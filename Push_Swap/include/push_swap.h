/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 20:48:32 by rojaguen          #+#    #+#             */
/*   Updated: 2018/08/16 16:13:07 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"

typedef struct		s_link
{
	int				nb;
	int				count;
	struct s_link	*next;
}					t_link;

t_link				*pars_arg(char **str, t_link *a_lst, int i, int a);
t_link				*new_link(int nb);
t_link				*del_list(t_link **s_list);
t_link				*add_link_front(t_link *list, t_link *new);
t_link				*add_link_end(t_link *list, t_link *new);
t_link				*ft_sa(t_link *s_list);
t_link				*ft_sb(t_link *s_list);
t_link				*del_front(t_link *s_list);
t_link				*ft_ra(t_link *s_list);
t_link				*ft_rb(t_link *s_list);
t_link				*ft_rra(t_link *s_list);
t_link				*ft_rrb(t_link *s_list);
t_link				*del_end(t_link *s_list);
t_link				*ft_pars(int nb, t_link *s_list);
void				ft_pa(t_link **s_list, t_link **b_lst);
void				ft_pb(t_link **s_list, t_link **b_lst);
void				ft_rr(t_link **a_lst, t_link **b_lst);
void				ft_visu(t_link *s_list, t_link *b_lst);
void				ft_pb(t_link **s_list, t_link **b_lst);
void				algo(t_link *a_lst, t_link *b_lst);
void				ft_split(t_link **a_lst, t_link **b_lst, int med);
void				put_val_front(t_link **a_lst, int nb);
void				put_val(t_link **a_lst, t_link **b_lst);
void				sort_three(t_link **a_lst);
void				sort_list(t_link **a_lst, t_link **b_lst);
int					ft_free_lst(t_link **lst, t_link **lst_b);
int					list_count(t_link *s_list);
int					ft_check_sort(t_link *s_list);
int					ft_check(char **argv);
int					*quicksort(int *v, int i);
int					*lst_to_int(t_link *a_lst, int size);
int					get_index(t_link *a_lst, int i);
int					check_cycle(t_link *s_list, int med);
int					get_med(t_link *a_lst);
int					get_max_val(t_link *a_lst);
int					get_last_val(t_link *a_lst);
t_link				*sa(t_link *s_list);
t_link				*sb(t_link *s_list);
t_link				*ra(t_link *s_list);
t_link				*rb(t_link *s_list);
t_link				*rra(t_link *s_list);
t_link				*rrb(t_link *s_list);
void				pb(t_link **s_list, t_link **b_lst);
void				pa(t_link **s_list, t_link **b_lst);
int					other_move(char *s, t_link **a_lst, t_link **b_lst);
#endif
