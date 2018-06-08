#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vliubko <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/09 20:59:37 by vliubko           #+#    #+#              #
#    Updated: 2017/08/10 12:46:05 by vliubko          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FILES := ft_putchar ft_putnbr ft_putstr ft_strlen ft_strdup ft_atoi \
ft_strcpy ft_strncpy ft_strstr ft_strnstr ft_strcmp ft_strncmp \
ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper \
ft_tolower ft_bzero ft_memset ft_memcpy ft_memccpy ft_memmove \
ft_memchr ft_memcmp ft_strcat ft_strncat ft_strlcat ft_strchr \
ft_strrchr ft_memalloc ft_memdel ft_putendl ft_strnew ft_strdel \
ft_strclr ft_striter ft_striteri ft_strmap ft_strmapi ft_strequ \
ft_strnequ ft_strsub ft_strjoin ft_strtrim ft_strsplit ft_itoa \
ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew \
ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap ft_swap \
ft_int_sort ft_isspace ft_strrev ft_sqrt ft_count_elems \
ft_free_2d_array get_next_line ft_strsplit_whitespaces \
ft_strjoin_free ft_atolonglongi ft_convertbinarytodecimal \
ft_strchr_whitespace ft_pathjoin ft_print_r ft_strends \
ft_lst_pushback ft_convert_2dtab_to_3dtab

SRC 	= $(addprefix $(S_DIR)/, $(addsuffix .c, $(FILES)))
OBJ 	= $(addprefix $(O_DIR)/, $(addsuffix .o, $(FILES)))

S_DIR 	= src
O_DIR 	= obj

HEADER	= includes/libft.h
INC		= -I includes

FLAGS	= -Wall -Werror -Wextra

all: obj $(NAME)

$(O_DIR)/%.o: src/%.c $(HEADER)
	@gcc $(FLAGS) -c $(INC) $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32mLibft \033[1;32mLibft \033[1;0m\033[32m created.\033[0m"

obj:
	@mkdir -p obj

clean:
	@rm -f $(OBJ)
	@rm -rf $(O_DIR)
	@echo "\033[32mRemoved Libft Object Files\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[31mLibrary \033[1;31m$(NAME)\033[1;0m\033[31m removed.\033[0m"

re: fclean all
