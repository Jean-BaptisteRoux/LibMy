/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>
#include "my.h"

int pstrc(char const *str, int *compteur)
{
    unsigned int len = 0;

    while (str[len] != '\0'){
        pcharc(str[len], compteur);
        len++;
    }
    return 0;
}
