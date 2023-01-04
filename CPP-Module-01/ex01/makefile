NAME = Zombie

c++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
src =	Zombie.cpp main.cpp zombieHorde.cpp
		
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