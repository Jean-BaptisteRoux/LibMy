##
## EPITECH PROJECT, 2023
## ProjectDay03
## File description:
## test
## test
##

CC = gcc
CFLAGS = -Wall -Wextra
EXEC = my_printf
SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(SRC_FILES:.c=.o)

all: lib

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
	@(rm -f libmy.a)
	@(rm -f *.o)
	@(echo "Fichiers .o supprimés")

fclean: clean
	@(rm -f $(EXEC))
	@(echo "Éxecutable supprimé")

unit_tests:	$(OBJ_FILES)
	@($(CC) -o test_$(EXEC) $^ -I./ --coverage -lcriterion)
	@(echo "Test compilé")

run:$(EXEC)
	@(./$(EXEC))

tests_run:
	@(./test_my_printf)
	@(gcovr --exclude tests/ --branch)

re :	fclean all
