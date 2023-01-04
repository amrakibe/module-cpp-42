# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 04:55:03 by amrakibe          #+#    #+#              #
#    Updated: 2022/10/29 16:58:11 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

c++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
src =	Zombie.cpp randomChump.cpp main.cpp newZombie.cpp
		
OBJ = $(src:.cpp=.o)

$(NAME) : $(OBJ)
	@$(c++) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp Zombie.hpp
	@$(c++) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all