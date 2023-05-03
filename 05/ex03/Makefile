# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acosta-a <acosta-a@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 08:46:52 by acosta-a          #+#    #+#              #
#    Updated: 2023/05/03 12:50:52 by acosta-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f
SRC_NAME = Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
