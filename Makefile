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
SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ_FILES)
	@($(CC) -o $(EXEC) $^)
	@(echo "Éxecutable compilé")

%.o: %.c
	@($(CC) -o $@ -c $< $(CFLAGS))
	@(echo "Fichiers .o compilés")

lib:$(OBJ_FILES)
	@(ar rc libmy.a $^)

.PHONY: clean fclean

clean:
	@(rm -f $(OBJ_FILES))
	@(echo "Fichiers .o supprimés")

fclean: clean
	@(rm -f libmy.a)
	@(rm -f $(EXEC))
	@(echo "Éxecutable supprimé")

run:$(EXEC)
	@(./$(EXEC))

re : fclean all
