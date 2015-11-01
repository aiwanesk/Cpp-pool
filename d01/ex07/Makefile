# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gthiry <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 15:39:40 by gthiry            #+#    #+#              #
#*   Updated: 2015/06/11 03:19:39 by gthiry           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp\

CC = clang++
FLAGS = -Wall -Wextra -Werror

RM = rm -f

RED = \033[31m
CYAN = \033[36m
NORMAL = \033[00m
GREY = \033[90m

.PHONY: clean fclean all

all: $(NAME)

$(NAME):
	@$(CC) -o $(NAME) $(SRC)
	@echo "$(CYAN)[$(NAME)]$(GREY) Executable created.$(NORMAL)"

re: fclean all

fclean:
	@$(RM) $(NAME)
	@echo "$(CYAN)[$(NAME)]$(RED) Executable deleted.$(NORMAL)"
