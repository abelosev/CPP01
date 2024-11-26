NAME    = brain

# Sources and Objects
SRC     = main.cpp
OBJ     = $(OBJ_DIR)/main.o

# Directories
OBJ_DIR = ./obj

# Compilation
CC      = g++
CFLAGS  = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "Brain successfully updated!"

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

# Cleaning
clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
