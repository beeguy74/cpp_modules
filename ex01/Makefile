CC = g++
FLAGS = -Wall -Wextra -Werror #-MMD #-g -fsanitize=address
#VPATH := include
SRCS = phonebook.cpp

#INC = func.h 

OBJ = $(SRCS:.cpp=.o)
#DEPENDS = ${SRCS:.cpp=.d}
NAME = phonebook 

.PHONY: all clean fclean re lib

all: $(SRCS) $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) $(LFT) -o $(NAME)

.cpp.o: $(SRCS)
		$(CC) $(FLAGS) -c $< #-I./include

clean:
		@rm -rf $(OBJ) #$(DEPENDS)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

#-include ${DEPENDS}
