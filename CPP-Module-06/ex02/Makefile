NAME = Base

CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
src = Base.cpp main.cpp

OBJ = $(src:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp Base.hpp
	$(CC) $(FLAG) -c $< -o $@

fclean: clean
	$(RM) $(NAME)
clean:
	$(RM) $(OBJ)

re: fclean all

.PHONY: fclean clean re all