/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

static char min2(char str)
{
    if (str >= 'A' && str <= 'Z' )
        str = str + ' ';
    return str;
}

static char maj2(char str)
{
    if (str > 90)
        str = str - ' ';
    return str;
}

char *my_strcapitalize(char *str)
{
    str[0] = maj2(str[0]);
    for (int i = 0; str[i + 1] != '\0'; i++) {
        if (str[i] == ' ')
            str[i + 1] = maj2(str[i + 1]);
        else
            str[i + 1] = min2(str[i + 1]);
    }
    return str;
}
