NAME    = sed

# Directories
SRC_DIR = ./src
INC_DIR = ./inc
OBJ_DIR = ./obj

# Sources and Objects
SRC     = $(SRC_DIR)/main.cpp \
			$(SRC_DIR)/Sed.cpp

OBJ     = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

# Compilation
CC      = g++
CFLAGS  = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "Sed successfully updated!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

# Cleaning
clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re