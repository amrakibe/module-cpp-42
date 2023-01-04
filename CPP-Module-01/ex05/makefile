# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 12:53:08 by amrakibe          #+#    #+#              #
#    Updated: 2022/10/29 17:00:50 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

c++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
src = main.cpp Harl.cpp
		
OBJ = $(src:.cpp=.o)

$(NAME) : $(OBJ)
	@$(c++) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp Harl.hpp
	@$(c++) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
