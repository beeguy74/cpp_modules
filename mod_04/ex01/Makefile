CC = g++
FLAGS = -Wall -Wextra -Werror -std='c++98' -MMD #-g -fsanitize=address
VPATH := include
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

INC = Animal.hpp Cat.hpp Dog.hpp Brain.hpp 

OBJ = $(SRCS:.cpp=.o)
DEPENDS = ${SRCS:.cpp=.d}
NAME = test

.PHONY: all clean fclean re lib

all: $(SRCS) $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) $(LFT) -o $(NAME)

.cpp.o: $(SRCS)
		$(CC) $(FLAGS) -c $< -I./include/

clean:
		@rm -rf $(OBJ) $(DEPENDS)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

-include ${DEPENDS}
