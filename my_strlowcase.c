/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

static char min(char str)
{
    if (str >= 'A' && str <= 'Z')
        str = str + ' ';
    return str;
}

char *my_strlowcase(char *str)
{
    str[0] = min(str[0]);
    for (int i = 0; str[i + 1] != '\0'; i++)
        if (str[i] == ' ')
            str[i + 1] = min(str[i + 1]);
    return str;
}
