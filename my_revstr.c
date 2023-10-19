/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char dest[len];

    for (int i = 0; i != len; i++){
        dest[i] = str[len - i - 1];
    }
    return dest;
}
