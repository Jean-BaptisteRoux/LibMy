/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (n > my_strlen(src)){
        n = my_strlen(src);
    }
    while (src[i] != src[n] ){
        dest[i] = src[i];
        i++;
    }
    return dest;
}
