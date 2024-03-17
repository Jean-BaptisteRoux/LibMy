/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = strl(dest) + nb;
    char *str = malloc(sizeof(char) * (len + 1));
    int i = 0;

    for (int j = 0; dest[j] != '\0'; i++){
        str[j] = dest[j];
    }
    for (; i < nb && src[i] != '\0'; i++){
        str[len + i] = src[i];
    }
    str[len + i] = '\0';
    return dest;
}
