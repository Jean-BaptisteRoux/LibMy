/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** test
** test
*/
#include "my.h"

int printf_array(
    char **tab,
    char *end)
{
    for(int i = 0; tab[i] != NULL; i++){
        write(1, tab[i], strl(tab[i]));
        if (tab[i + 1] != NULL)
            write(1, end, strl(end));
    }
    return 0;
}