# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 15:28:19 by nlory-ma          #+#    #+#              #
#    Updated: 2015/01/05 15:28:21 by nlory-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC =	main.cpp \
	Contact.Class.cpp
HEAD =
OBJ = $(SRC:.cpp=.o)
CMP = g++
FLAGS = -Wall -Werror -Wextra
LFLAGS =

all: $(NAME)

$(NAME):
	$(CMP) $(SRC) $(FLAGS) -o $(NAME)

%.o: %.cpp

re: fclean all

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

.PHONY: clean fclean re
