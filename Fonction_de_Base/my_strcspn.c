/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** Gestion de l'option d
*/
#include "my.h"

int my_strcspn(
    char *str,
    char *reject)
{
    int indexStr = 0;

    while (str[indexStr] != '\0') {
        if (my_strcmp(&(str[indexStr]), reject) == 0)
            return indexStr;
        indexStr++;
    }
    return -1;
}
