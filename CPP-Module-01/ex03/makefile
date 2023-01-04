# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 17:01:43 by amrakibe          #+#    #+#              #
#    Updated: 2022/10/29 22:22:18 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

c++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr

src = 	HumanA.cpp \
		HumanB.cpp \
		main.cpp \
		Weapon.cpp

OBJ = $(src:.cpp=.o)

$(NAME) : $(OBJ)
	@$(c++) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp HumanA.Hpp HumanB.Hpp Weapon.hpp
	@$(c++) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
