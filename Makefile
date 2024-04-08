##
## EPITECH PROJECT, 2023
## ProjectDay03
## File description:
## test
## test
##

CC = gcc
CFLAGS = -Wall -Wextra -g3 -w
EXEC = test
SRC_FILES = $(shell find . -type f -name "*.c" ! -path "./.*/*")
# SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ_FILES)
	@(echo "\033[4;32mFichiers .o compilés\033[0m")
	@($(CC) -o $(EXEC) $^)
	@(echo "\033[1;34mÉxecutable compilé\033[0m")

%.o: %.c
	@(echo -n "\033[33m$@  \033[0m")
	@($(CC) -o $@ -c $< $(CFLAGS) -I./include)
	@(echo "\033[32mOK\033[0m")

lib:$(OBJ_FILES)
	@(ar rc libmy.a $^)

.PHONY: clean fclean

clean:
	@(rm -f $(OBJ_FILES))
	@(echo "\033[31mFichiers .o supprimés\033[0m")

fclean: clean
	@(rm -f libmy.a)
	@(rm -f $(EXEC))
	@(echo "\033[31mÉxecutable supprimé\033[0m")

run:$(EXEC)
	@(echo "\033[34mDébut de l'exécution\033[0m")
	@(./$(EXEC) $(MAKECMDGOALS))
	@(echo "\033[34mFin de l'exécution\033[0m")

re : fclean all

code: fclean
	@(~/coding-style-checker/coding-style.sh . .)
	@(cat coding-style-reports.log)