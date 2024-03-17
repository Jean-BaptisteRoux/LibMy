/*
** EPITECH PROJECT, 2023
** aoishoiajs
** File description:
** aoijsoiajs
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "printf.h"

int reset_attr(struct attributs **attr)
{
    (*attr)->dieze = 0;
    (*attr)->tiret = 0;
    (*attr)->espaces = NULL;
    (*attr)->plus_sign = NULL;
    (*attr)->zero = 0;
    (*attr)->affi = 6;
}

int ai(int *a, int *i)
{
    (*a)++;
    (*i)--;
    return 0;
}

int check_i(int *a, int *i)
{
    if ((*i) == 12) {
        (*a)++;
        (*i) = -1;
        return 1;
    }
    return 0;
}

int def_i(int *a, struct attributs **attr)
{
    reset_attr(attr);
    (*a)++;

    return 0;
}

int get_affi(struct attributs **attr,
    const char *restrict format, int *compteur, int *a)
{
    if (format[*a] != '.')
        return 0;
    (*a)++;
    (*attr)->affi = my_getnbr(format + (*a));
    (*a) += my_intlen((*attr)->affi);
    return 0;
}

