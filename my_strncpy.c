/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (n > strl(src))
        n = strl(src);
    while (src[i] != src[n] ){
        dest[i] = src[i];
        i++;
    }
    return dest;
}
