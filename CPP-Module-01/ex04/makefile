# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 17:01:33 by amrakibe          #+#    #+#              #
#    Updated: 2022/10/30 09:51:12 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = losers

c++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr

src = main.cpp

OBJ = $(src:.cpp=.o)
$(NAME) : $(OBJ)
	@$(c++) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp
	@$(c++) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
