NAME = My_Awesome_PhoneBook

SRC = main.cpp\
	 Contact.class.cpp\
	 Phonebook.class.cpp\

OBJ = $(SRC:.c=.o)
HERE = $(.)

SRC_C := $(addprefix $(HERE), $(SRC))

CC = clang++
FLAGS = -Wall -Wextra -Werror

RED = \033[31m
CYAN = \033[36m
NORMAL = \033[00m
GREY = \033[90m

.PHONY: clean fclean all re propre

all: $(NAME)

$(NAME): $(SRC_O)
	@$(CC) -o $(NAME) $(SRC_O)
	@echo "$(CYAN)[$(NAME)]$(GREY) Executable created.$(NORMAL)"

$(SRC_O): $(SRC_C)
	@$(CC) $(FLAGS) -c $(SRC_C)
	@if [ -d $(ODIR) ]; then\
		echo "$(CYAN)[$(NAME)]$(GREY) Objects Directory already exists.$(NORMAL)";\
	else\
		mkdir $(ODIR);\
	fi
	@mv $(OBJ) $(ODIR)
	@echo "$(CYAN)[$(NAME)]$(GREY) Objects created.$(NORMAL)"

re: fclean all

clean:
	@rm -f $(SRC_O)
	@rm -rf $(ODIR)
	@echo "$(CYAN)[$(NAME)]$(RED) All objects file deleted.$(NORMAL)"

fclean:
	@rm -f $(SRC_O)
	@rm -rf $(ODIR)
	@echo "$(CYAN)[$(NAME)]$(RED) All objects file deleted.$(NORMAL)"
	@rm -f $(NAME)
	@echo "$(CYAN)[$(NAME)]$(RED) Executable deleted.$(NORMAL)"

propre: all clean
