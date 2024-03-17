/*
** EPITECH PROJECT, 2023
** aiusioasj
** File description:
** aosoaijs
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

char *conv_to_hexx(long long a)
{
    char *r = malloc(sizeof(char) * (my_intlen(a) + 2));
    int i = 0;

    if (a == 0)
        return "0\0";
    for (i = 0 ; a > 0 ; i++) {
        if ((a % 16) > 9) {
            r[i] = (a % 16) + 7 + 48;
        } else {
            r[i] = (a % 16) + 48;
        }
        a = a / 16;
    }
    r[i] = '\0';
    r = my_revstr(r);
    return r;
}

char *conv_to_hex(long long a)
{
    char *r = malloc(sizeof(char) * (my_intlen(a) + 2));
    int i = 0;

    if (a == 0)
        return "0\0";
    for (i = 0 ; a > 0 ; i++) {
        if ((a % 16) > 9) {
            r[i] = (a % 16) + 39 + 48;
        } else {
            r[i] = (a % 16) + 48;
        }
        a = a / 16;
    }
    r[i] = '\0';
    r = my_revstr(r);
    return r;
}
