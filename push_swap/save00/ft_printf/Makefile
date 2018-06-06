# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/12 18:44:12 by rojaguen          #+#    #+#              #
#    Updated: 2018/05/15 18:26:59 by rojaguen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = clang

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror -O2

LIBFT = libft

DIR_S = srcs

DIR_O = .

HEADER = include

SOURCES = srcs/ft_printf.c \
		srcs/ft_stock_percent.c \
		srcs/ft_stock_s.c \
		srcs/ft_stock_u.c \
		srcs/ft_stock_x.c \
		srcs/ft_strcat_f.c \
		srcs/ft_check_flag.c \
		srcs/ft_init_bool.c  \
		srcs/ft_itoa2.c \
		srcs/ft_itoa_base.c \
		srcs/ft_stock_c.c \
		srcs/ft_stock_d.c \
		srcs/ft_stock_d2.c \
		srcs/ft_stock_lx.c \
		srcs/ft_stock_o.c \
		srcs/ft_stock_p.c


#SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

#OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))

OBJS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@make -C $(LIBFT)
		@cp libft/libft.a ./$(NAME)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

clean:
	@make -C $(LIBFT) clean
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all

.PHONY: fclean re norme all clean
