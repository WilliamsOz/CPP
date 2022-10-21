# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 19:49:48 by wiozsert          #+#    #+#              #
#    Updated: 2022/10/21 15:36:55 by wiozsert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJ = main.o Bureaucrat.o Form.o ShrubberyCreationForm.o \
RobotomyRequestForm.o PresidentialPardonForm.o Intern.o

all : $(NAME)

$(NAME) : $(SRCS)
	mkdir -p obj
	c++ -Wall -Wextra -Werror -std=c++98 $(SRCS) -c
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)
	mv $(OBJ) ./obj

clean :
	rm -rf obj

fclean : clean
	rm -rf $(NAME)

re : fclean all