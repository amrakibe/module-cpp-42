NAME = convert

CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
src = Cast.cpp

OBJ = $(src:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp 
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean re all