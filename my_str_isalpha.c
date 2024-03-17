/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

int str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < 'a' && str[i] > 'z') || (str[i] < 'A' && str[i] > 'Z'))
            return i;
    return -1;
}
