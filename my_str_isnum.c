/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return i;
    return -1;
}
