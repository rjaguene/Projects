# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/12 15:28:57 by rojaguen          #+#    #+#              #
#    Updated: 2018/10/13 17:38:42 by rojaguen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_ls

CC			=	gcc #-Wall -Wextra -Werror 
FLAGS		= #-fsanitize=address -g3

LIBFTDIR	=	libft/
LIBFT 		=	$(LIBFTDIR)libft.a

SRCDIR		=	src/

SRCS		=	main.c \
				pars.c

OBJDIR		=	#bin/
SUBDIRS		=	#structs \
					parser

OBJDIRS		=	$(addprefix $(OBJDIR), $(SUBDIRS))
OBJS		=	$(addprefix $(OBJDIR), $(SRCS:.c=.o))

all: $(LIBFT) $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	@echo "Creating the lem-in executable..."
	@$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "LS made!"

$(LIBFT):
	@make -C $(LIBFTDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIRS)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@$(CC) $(FLAGS) -Iincludes -o $@ -c $<

clean:
	@/bin/rm -rf $(OBJDIR)
	@make -C $(LIBFTDIR) clean

fclean: clean
	@/bin/rm -f $(NAME)
	@make -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
