# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 13:25:21 by amrakibe          #+#    #+#              #
#    Updated: 2022/12/30 19:05:30 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
src = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(src:.cpp=.o)

	
$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	
all : $(NAME)

%.o:%.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean re all
