# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 00:31:37 by amrakibe          #+#    #+#              #
#    Updated: 2022/11/08 10:26:16 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz
RED = \033[0;31m
MAG = \033[0;35m
c++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr

src =  PhoneBook.cpp \
		Contact.cpp \
		main.cpp

OBJ = $(src:.cpp=.o)
$(NAME) : $(OBJ)
	@$(c++) $(FLAG) $(OBJ) -o $(NAME)
	@echo "${MAG}making successfully $(NAME)"

all : $(NAME)

%.o:%.cpp PhoneBook.hpp
	@$(c++) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "${RED}successfully remove OBJ"

fclean: clean
	@$(RM) $(NAME)
	@echo "${RED}successfully remove $(NAME)"

re: fclean all
