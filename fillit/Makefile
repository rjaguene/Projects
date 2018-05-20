# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/20 23:28:04 by rojaguen          #+#    #+#              #
#    Updated: 2018/05/20 23:28:08 by rojaguen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	@$(MAKE) -C libft/
	@$(MAKE) -C srcs/
	@$(CC) -o $@ $(FLAGS) srcs/libfill.a libft/libft.a

clean :
	@$(MAKE) -C srcs/ clean
	@$(MAKE) -C libft/ clean
	@rm -f $(OBJS)

fclean : clean
	@$(MAKE) -C srcs/ fclean
	@$(MAKE) -C libft/ fclean
	@rm -rf $(NAME) libfill.a

re : fclean all
