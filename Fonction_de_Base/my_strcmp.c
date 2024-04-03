/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

int my_strcmp(
    char *s1,
    char *s2)
{
    int i = 0;

    if (strl(s1) < strl(s2))
        return 128;
    while (s1[i] != '\0' && s2[i] != '\0'){
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}
