CC = clang++
FLAGS = -Wall -Wextra -Werror -MMD -std=c++98 -pedantic#-g -fsanitize=address
VPATH := include
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp

INC = ClapTrap.hpp FragTrap.hpp

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
