/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

static char maj(char str)
{
    if (str > 90)
        str = str - ' ';
    return str;
}

char *my_strupcase(char *str)
{
    str[0] = maj(str[0]);
    for (int i = 0; str[i + 1] != '\0'; i++)
        if (str[i] == ' ')
            str[i + 1] = maj(str[i + 1]);
    return str;
}
