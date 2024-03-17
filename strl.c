/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

int strl(char const *str)
{
    int len = 0;

    for (; str[len] != '\0'; len++){}
    return len;
}
