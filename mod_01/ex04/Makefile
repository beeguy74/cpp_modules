CC = g++
FLAGS = -Wall -Wextra -Werror -MMD #-g -fsanitize=address
VPATH := include
SRCS = main.cpp
INC = replace.h
OBJ = $(SRCS:.cpp=.o)
DEPENDS = ${SRCS:.cpp=.d}
NAME = replace
TESTNAME = REALTEST

.PHONY: all clean fclean re lib

all: $(SRCS) $(NAME)

$(TESTNAME):
		echo vasya > test_chmod
		chmod 0 test_chmod
		gcc test.c -o $(TESTNAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) $(LFT) -o $(NAME)

.cpp.o: $(SRCS)
		$(CC) $(FLAGS) -c $< -I./include/

clean:
		@rm -rf $(OBJ) $(DEPENDS)

fclean: clean
		@rm -rf $(NAME)
		@rm -rf $(TESTNAME)
		@rm -rf *.replace
		@rm -rf test_chmod
		

re: fclean all

-include ${DEPENDS}
