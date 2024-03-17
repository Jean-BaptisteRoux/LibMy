/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Affiche %c %C
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int bonus_c(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        (*attr)->espaces[my_strlen((*attr)->espaces)] = va_arg(list, int);
        (*attr)->espaces[my_strlen((*attr)->espaces) + 1] = '\0';
        (*attr)->espaces = my_justify_text((*attr)->espaces);
        my_putstr((*attr)->espaces, compteur);
        return 1;
    }
    return 0;
}

int assert_c(va_list list, char c, int *compteur, struct attributs **attr)
{
    int len = my_strlen((*attr)->espaces);
    char *r = malloc(sizeof(char) * (len + 1));

    if (c == 'c') {
        if (bonus_c(list, c, compteur, attr) == 1)
            return 1;
        if ((*attr)->espaces) {
            r = (*attr)->espaces;
            r[len - 1] = va_arg(list, int);
            r[len] = '\0';
            my_putstr(r, compteur);
        } else {
            my_putchar(va_arg(list, int), compteur);
        }
        return 1;
    }
    return 0;
}

int bonus_cc(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->zero == 1)
        (*attr)->espaces[my_strlen((*attr)->espaces) - 1] = '\0';
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        (*attr)->espaces[my_strlen((*attr)->espaces)] = va_arg(list, wchar_t);
        (*attr)->espaces[my_strlen((*attr)->espaces) + 1] = '\0';
        (*attr)->espaces = my_justify_text((*attr)->espaces);
        my_putstr((*attr)->espaces, compteur);
        return 1;
    }
    return 0;
}

int assert_cc(va_list list, char c, int *compteur, struct attributs **attr)
{
    int len = my_strlen((*attr)->espaces);
    char *r = malloc(sizeof(char) * (len) + sizeof(wchar_t));

    if (c == 'C') {
        if (bonus_cc(list, c, compteur, attr) == 1)
            return 1;
        if ((*attr)->espaces) {
            r = (*attr)->espaces;
            r[len - 1] = va_arg(list, wchar_t);
            r[len] = '\0';
            my_putstr(r, compteur);
        } else {
            my_putchar(va_arg(list, wchar_t), compteur);
        }
        return 1;
    }
    return 0;
}
