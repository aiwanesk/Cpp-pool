FLAGS = -Wall -Wextra -Werror

DEBUG = $(FLAGS) -g

NAME = test

CC = clang++

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

.PHONY: all, clean, fclean, re, debug, propre

all:
	@make $(NAME)

$(NAME): $(OBJ)
	@echo "\033[36m[$(NAME)]Create $(NAME) executable \033[0m"
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

propre: $(NAME) clean

FLAGS = -Wall -Wextra -Werror

%.o: %.cpp
	@echo "\033[32m[$(NAME)]Compile $< into $@\033[0m"
	$(CC) $(FLAGS) -c $< -I . -o $@

clean:
	@echo "\033[31m[$(NAME)]Delete all \".o\"\033[0m"
	@$(RM) $(OBJ)

fclean: clean
	@echo "\033[31m[$(NAME)]Delete $(NAME) executable\033[0m"
	@$(RM) $(NAME)

re: fclean all

debug:
	@echo "\033[32m[$(NAME)]Compile all \".c\" with debug flag\033[0m"
	@$(CC) $(DEBUG) $(CFLAGS) -c $(SRC)
	@$(CC) $(DEBUG) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[36m[$(NAME)]Create $(NAME)\033[0m"
