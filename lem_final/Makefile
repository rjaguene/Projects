# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 11:59:32 by akhercha          #+#    #+#              #
#    Updated: 2018/09/27 18:15:43 by rojaguen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	lem-in

CC			=	gcc -Wall -Wextra -Werror
FLAGS		=	

LIBFTDIR	=	libft/
LIBFT 		=	$(LIBFTDIR)libft.a

SRCDIR		=	src/

SRCS		=	main.c \
					parser/parse_stdin.c \
					parser/line_is.c \
					parser/line_handle.c \
					structs/init.c \
					structs/node.c \
					structs/node2.c \
					structs/adjacency.c \
					print_ant.c \
					print_ant_2.c \
					lst.c \
					ft_free_lst.c

OBJDIR		=	bin/
SUBDIRS		=	structs \
					parser

OBJDIRS		=	$(addprefix $(OBJDIR), $(SUBDIRS))
OBJS		=	$(addprefix $(OBJDIR), $(SRCS:.c=.o))

all: $(LIBFT) $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	@echo "Creating the lem-in executable..."
	@$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "lem-in made!"

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
