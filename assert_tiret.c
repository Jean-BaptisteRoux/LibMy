/*
** EPITECH PROJECT, 2023
** oaisoijas
** File description:
** oaisjoiajs
*/

#include "printf.h"
#include <stdarg.h>

int assert_tiret(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == '-') {
        (*attr)->tiret = 1;
        return 1;
    }
    return 0;
}
