# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 17:01:54 by amrakibe          #+#    #+#              #
#    Updated: 2022/10/29 17:02:20 by amrakibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  BRAIN

C++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr

src = main.cpp

OBJ = $(src:.cpp=.o)
$(NAME) : $(OBJ)
	@$(C++) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp
	@$(C++) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
