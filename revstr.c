/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

char *revstr(char *str)
{
    int len = strl(str);
    char *dest = malloc(sizeof(char) * len);

    for (int i = 0; i != len; i++)
        dest[i] = str[len - i - 1];
    return dest;
}
