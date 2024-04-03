/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** Copier les caractères de str dans dest
*/
#include "my.h"

char *my_strcpy(
    char *dest,
    char *src)
{
    int i = 0;
    int debut = strl(dest);

    if (strl(dest) + strl(src) >= 4095)
        return NULL;
    while (src[i] != '\0'){
        dest[debut + i] = src[i];
        dest[debut + i +1] = '\0';
        i++;
    }
    return dest;
}
