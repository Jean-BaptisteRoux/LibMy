/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

char *my_strdup(char const *src)
{
    char *str= malloc(sizeof(char) + strl(src) + 1);
    
    str = my_strcpy(str, src);
    return str;
}
