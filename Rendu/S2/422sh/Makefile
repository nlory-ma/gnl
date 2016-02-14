# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/23 23:14:19 by nlory-ma          #+#    #+#              #
#    Updated: 2014/05/24 05:13:17 by nlory-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			42sh


FLAGS =			-Wall -Wextra -Werror

#LIBMLX =		-L/usr/X11/lib -lmlx -lXext -lX11

LIBFT =			libft/libft.a

LIBFTA =		-L./libft/ -lft

SRC =			main.c			\
				ft_prompt.c 	\
				ft_extract.c	\
				ft_exit.c		\
				ft_env.c		\
				ft_echo.c		\
				
OBJ = 			$(SRC:.c=.o)

HEADER = 		includes/

all : 			$(NAME)

$(NAME) :		$(LIBFT) $(OBJ)
				@gcc -g $(FLAGS) $(OBJ) $(LIBFTA) $(LIBFT) -o $(NAME)
				@echo "\033[36m◉ \033[33m42sh is done !\033[0m"


$(LIBFT) :
				@make -C ./libft
				@echo "\033[36m\n◉ \033[33mlibft.a done !\033[0m"

%.o :			%.c
				@gcc $(FLAGS) -I $(HEADER) -c $^

clean :
				@make -C ./libft clean
				@rm -rf $(OBJ)
				@echo "\033[31m◉ \033[33m42sh_objs and libft _objs cleaned!\033[0m"

fclean :		clean
				@make -C ./libft fclean
				@rm -rf $(NAME)
				@echo "\033[31m◉ \033[33m42sh and libft.a cleaned !\033[0m"

re :			fclean all

.PHONY :		all fclean re
