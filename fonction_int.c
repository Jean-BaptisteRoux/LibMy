/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Ensemble de fonction liées à int
*/
#include <stdio.h>
#include <stdlib.h>
#include "printf.h"

int my_intlen(long long i)
{
    int a;

    if (i == 0)
        return 0;
    for (a = 0 ; i != 0 ; a++)
        i = i / 10;
    return (a);
}

int my_isodd(int i)
{
    int a;

    a = i / 2;
    if (a * 2 == i) {
        return 0;
    }
    return 1;
}

int my_getnbr(char const *str)
{
    int i;
    int a = 0;
    int neg = 0;
    int r = 0;

    for (i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] == '%' || str[i] == '.')
            return 0;
        if (my_isnum(str[i]) == 1) {
            a = 1;
            r = r * 10 + (str[i] - 48);
        }
        if (my_isnum(str[i]) == 0 && a == 1)
            break;
    }
    return r;
}
