# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 01:23:36 by amrakibe          #+#    #+#              #
#    Updated: 2022/10/25 21:02:38 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[0;36m
MAG = \033[0;15m
NAME = megaphone
c++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
src = megaphone.cpp

OBJ = $(src:.cpp=.o)

$(NAME) : $(OBJ)
	@$(c++) $(FLAG) $(OBJ) -o $(NAME)
	@echo "${MAG}making successfully" $(NAME)

all : $(NAME)

%.o:%.cpp
	@$(c++) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "${RED}successfully remove $(OBJ)"
	
fclean: clean
	@$(RM) $(NAME)
	@echo "${RED}successfully remove $(NAME)"

re: fclean all
