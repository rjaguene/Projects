/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_prototypes.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:00:58 by akhercha          #+#    #+#             */
/*   Updated: 2018/08/17 12:00:58 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PROTOTYPES_H
# define LIBFT_PROTOTYPES_H

# include "libft_structs.h"

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_ischarset(int c, char *charset);
int					ft_isdigit(int c);
int					ft_isnumber(char *str);
int 				ft_isinteger(char *str);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isupper(int c);
int					ft_iswhitespace(int c);
int					ft_is_char_in(char *str, char c);

void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);

void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
void				ft_putstrtbl_fd(char **tab, int fd);
void				ft_putstrtbl(char **tab);

int					ft_atoi(const char *str);
long				ft_atol(const char *str);
long long			ft_atoll(const char *str);
char				*ft_itoa_base(int n, int base);
char				*ft_lltoa_base(unsigned long long n, int base);
char				*ft_convert_base(char *n, char *bf, char *bt);
char				*ft_chr_to_str(char c);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strtolower(char *str);
char				*ft_strtoupper(char *str);

int					ft_putwc(wchar_t c);
int					ft_wclen(wchar_t c);
int					ft_wcslen(wchar_t *s);
char				*ft_wctostr(wchar_t c);

char				*ft_strcat(char *dest, const char *src);
char				*ft_strconcat(char *s1, char *s2);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *src);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *haystack,
	const char *needle, size_t len);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
int					ft_chrindex(const char *s, char c);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstat(t_list *begin_list, unsigned int nbr);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelfirst(t_list **lst);
t_list				*ft_lstfind(t_list *begin_list,
	void *content_ref, int (*cmp)());
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstlast(t_list *begin_list);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstmerge(t_list **begin_list1, t_list *begin_list2);
int					ft_lstsize(t_list *begin_list);
void				ft_lststrput(t_list *begin_list);

t_stack				*ft_stack_new(int capacity);
int					ft_stack_swap(t_stack *stack);
int					ft_stack_push(t_stack *from, t_stack *to);
int					ft_stack_rotate(t_stack *stack);
int					ft_stack_reverse_rotate(t_stack *stack);
int					ft_stack_add(t_stack *stack, int value);
void				ft_stack_put(t_stack *stack);
int					ft_stack_issort(t_stack *stack);
int					ft_stack_isempty(t_stack *stack);
int					ft_stack_hasduplicates(t_stack *stack);
int					ft_stack_find(t_stack *stack, int to_find);
int 				ft_stack_top(t_stack *stack);
int 				ft_stack_min(t_stack *stack);
int					ft_stack_max(t_stack *stack);

void				ft_swap(int *a, int *b);
int					get_next_line(const int fd, char **line);
void				ft_errormsg(int code, char *msg);

int					ft_min(int a, int b);
int					ft_max(int a, int b);
int					ft_abs(int n);
int					ft_nbdigits_int(int n);

void				ft_intarr_shift(int *arr, int len);
void				ft_intarr_reverse_shift(int *arr, int len);
void				ft_intarr_put(int *arr, int len);
int					ft_intarr_hasduplicates(int *arr, int len);
void				ft_intarr_init(int *arr, int len, int value);

#endif
