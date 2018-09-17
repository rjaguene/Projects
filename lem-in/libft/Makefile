# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 12:01:55 by akhercha          #+#    #+#              #
#    Updated: 2018/09/13 14:40:30 by akhercha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

HEADER	=	libft.h

CC	=	gcc
FLAGS	=	-Wall -Wextra -Werror

SRCDIR	=	src/
SRCS	=	is/ft_isalnum.c \
				is/ft_isalpha.c \
				is/ft_isascii.c \
				is/ft_ischarset.c \
				is/ft_isdigit.c \
				is/ft_isnumber.c \
				is/ft_isinteger.c \
				is/ft_islower.c \
				is/ft_isprint.c \
				is/ft_isupper.c \
				is/ft_iswhitespace.c \
				lst/ft_lstadd.c \
				lst/ft_lstat.c \
				lst/ft_lstdel.c \
				lst/ft_lstdelone.c \
				lst/ft_lstfind.c \
				lst/ft_lstiter.c \
				lst/ft_lstlast.c \
				lst/ft_lstmap.c \
				lst/ft_lstmerge.c \
				lst/ft_lstnew.c \
				lst/ft_lstsize.c \
				lst/ft_lststrput.c \
				lst/ft_lstdelfirst.c \
				mem/ft_bzero.c \
				mem/ft_memalloc.c \
				mem/ft_memchr.c \
				mem/ft_memcmp.c \
				mem/ft_memcpy.c \
				mem/ft_memccpy.c \
				mem/ft_memdel.c \
				mem/ft_memmove.c \
				mem/ft_memset.c \
				put/ft_putchar.c \
				put/ft_putchar_fd.c \
				put/ft_putendl.c \
				put/ft_putendl_fd.c \
				put/ft_putnbr.c \
				put/ft_putnbr_fd.c \
				put/ft_putstr.c \
				put/ft_putstr_fd.c \
				put/ft_putstrtbl.c \
				put/ft_putstrtbl_fd.c \
				str/ft_strcat.c \
				str/ft_strconcat.c \
				str/ft_strchr.c \
				str/ft_strclr.c \
				str/ft_strcmp.c \
				str/ft_strcpy.c \
				str/ft_strdel.c \
				str/ft_strdup.c \
				str/ft_strequ.c \
				str/ft_striter.c \
				str/ft_striteri.c \
				str/ft_strjoin.c \
				str/ft_strlcat.c \
				str/ft_strlen.c \
				str/ft_strmap.c \
				str/ft_strmapi.c \
				str/ft_strncat.c \
				str/ft_strncmp.c \
				str/ft_strncpy.c \
				str/ft_strnequ.c \
				str/ft_strnew.c \
				str/ft_strnstr.c \
				str/ft_strrchr.c \
				str/ft_strsplit.c \
				str/ft_strstr.c \
				str/ft_strsub.c \
				str/ft_strtrim.c \
				str/ft_chrindex.c \
				str/ft_is_char_in.c \
				to/ft_convert_base.c \
				to/ft_tolower.c \
				to/ft_toupper.c \
				to/ft_atoi.c \
				to/ft_atol.c \
				to/ft_atoll.c \
				to/ft_itoa_base.c \
				to/ft_lltoa_base.c \
				to/ft_strtolower.c \
				to/ft_strtoupper.c \
				to/ft_chr_to_str.c \
				unicode/ft_putwc.c \
				unicode/ft_wclen.c \
				unicode/ft_wcslen.c \
				unicode/ft_wctostr.c \
				utils/get_next_line.c \
				utils/ft_swap.c \
				utils/ft_errormsg.c \
				math/ft_abs.c \
				math/ft_max.c \
				math/ft_min.c \
				math/ft_nbdigits_int.c \
				array/ft_intarr_shift.c \
				array/ft_intarr_reverse_shift.c \
				array/ft_intarr_put.c \
				array/ft_intarr_hasduplicates.c \
				stack/ft_stack_add.c \
				stack/ft_stack_new.c \
				stack/ft_stack_push.c \
				stack/ft_stack_put.c \
				stack/ft_stack_reverse_rotate.c \
				stack/ft_stack_rotate.c \
				stack/ft_stack_swap.c \
				stack/ft_stack_issort.c \
				stack/ft_stack_isempty.c \
				stack/ft_stack_hasduplicates.c \
				stack/ft_stack_find.c \
				stack/ft_stack_top.c \
				stack/ft_stack_min.c \
				stack/ft_stack_max.c

OBJDIR	=	bin/

SUBDIRS	=	is \
			lst \
			stack \
			mem \
			put \
			str \
			to \
			unicode \
			utils \
			math \
			array

DIRS	=	$(addprefix $(OBJDIR), $(SUBDIRS))
OBJS	=	$(addprefix $(OBJDIR), $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "libft.a done."

$(OBJDIR):
	@mkdir -p $(DIRS)
	@echo "Creating the static libft.a library..."

$(OBJDIR)%.o: $(SRCDIR)%.c
	@$(CC) $(FLAGS) -o $@ -c $< -Iincludes/

clean:
	@/bin/rm -rf $(OBJDIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
