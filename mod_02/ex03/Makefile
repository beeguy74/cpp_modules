CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98 -MMD #-g -fsanitize=address
VPATH := include
SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp

INC = Fixed.hpp Point.hpp

OBJ = $(SRCS:.cpp=.o)
DEPENDS = ${SRCS:.cpp=.d}
NAME = bsp

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
