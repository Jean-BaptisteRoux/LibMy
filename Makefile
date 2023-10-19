##
## EPITECH PROJECT, 2023
## ProjectPerso
## File description:
## Makefile optimisé
##
all :
	gcc -o do-op *.c
clean :
	rm -f do-op
fclean: clean
    rm -f $(NAME)
re: fclean all
