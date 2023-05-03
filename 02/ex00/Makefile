# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 21:02:00 by acosta-a          #+#    #+#              #
#    Updated: 2023/05/03 11:41:42 by acosta-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f
SRC_NAME = main.cpp Fixed.cpp

OBJ_NAME = $(SRC_NAME:.cpp=.o)
OBJ = $(OBJ_NAME)

all :$(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)

re: clean fclean $(NAME)

.PHONY: all clean fclean re


