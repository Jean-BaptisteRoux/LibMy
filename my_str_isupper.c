/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 'A' || str[i] > 'Z')
            return i;
    return -1;
}
