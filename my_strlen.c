/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0'){
        len++;
    }
    return len;
}
