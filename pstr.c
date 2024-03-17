/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

int pstr(char const *str, int len)
{
    if (len == 0)
        len = strl(str);
    if (len == -84)
        return 84;
    write(1, str, len);
    return 0;
}
