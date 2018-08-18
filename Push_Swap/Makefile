# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/11 14:29:03 by rojaguen          #+#    #+#              #
#    Updated: 2018/08/17 15:23:56 by rojaguen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME =				push_swap
NAME_CHECK = 		checker
CC =				gcc
FLAGS =				-Wall -Werror -Wextra
SRCS =				src/
INCLUDES =			include/
LIBFT =				libft/
FT_INCLUDES =		$(LIBFT)/includes

PS_COMPILED =			push_swap.o \
						algo.o \
						ft_pa.o \
						ft_pb.o \
						ft_ra.o \
						ft_rra.o \
						ft_sa.o \
						ft_sb.o \
						ft_split.o \
						get_index.o \
						get_last_val.o \
						get_max_val.o \
						get_med.o \
						lst_to_int.o \
						put_val.o \
						put_val_front.o \
						quicksort.o \
						sort_list.o \
						sort_three.o \

CHECKER_COMPILED =		checker.o \
						moves.o \
						moves2.o \
						relou.o

COMUNS_COMP = 			src/ft_atoi_space.o \
						src/del_end.o \
						src/ft_check_sort.o \
						src/del_front.o \
						src/ft_free_lst.o \
						src/add_link_end.o \
						src/add_link_front.o \
						src/ft_check.o \
						src/list_count.o \
						src/new_link.o \
						src/visu.o

all: $(NAME) $(NAME_CHECK) $(COMUNS_COMP)

$(NAME): $(PS_COMPILED) $(COMUNS_COMP)
	@make -C $(LIBFT)
	@$(CC) $(FLAGS) -o $(NAME) -L $(LIBFT) -lft $(PS_COMPILED) $(COMUNS_COMP)
	@mkdir BIN
	@echo "push_swap made" $(NAME)
	@say "push_swap made"

$(NAME_CHECK): $(CHECKER_COMPILED) $(COMUNS_COMP)
	@make -C $(LIBFT)
	@$(CC) $(FLAGS) -o $(NAME_CHECK) -L $(LIBFT) -lft $(CHECKER_COMPILED) $(COMUNS_COMP)
	@mv $(PS_COMPILED) $(CHECKER_COMPILED) $(COMUNS_COMP) BIN/
	@echo "checker made" $(NAME_CHECK)
	@say "checker made"
	@say "BINARY REPOSITORY GENERATED"

$(PS_COMPILED): %.o: $(SRCS)%.c
	@$(CC) -c $(FLAGS) -I $(FT_INCLUDES) -I $(INCLUDES) $< -o $@

$(CHECKER_COMPILED): %.o: $(SRCS)%.c
	@$(CC) -c $(FLAGS) -I $(FT_INCLUDES) -I $(INCLUDES) $< -o $@

clean:
	@-/bin/rm -rf $(PS_COMPILED) $(CHECKER_COMPILED) $(COMUNS_COMP) BIN
	@echo "cleaned" $(NAME)
	@say "REPO CLEANED"

fclean: clean
	@-/bin/rm -rf $(NAME) $(NAME_CHECK) $(COMUNS_COMP) BIN
	@echo "fcleaned" $(NAME) $(NAME_CHECK)
	@say "REPO F CLEANED"

re: fclean all
