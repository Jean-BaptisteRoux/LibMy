/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Affiche %d ou %i
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

int bonus_di(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->espaces && (*attr)->tiret == 1 && (*attr)->plus_sign) {
        CHAR3_1
        (*attr)->espaces = my_justify_text(tmp7);
        if ((*attr)->espaces[0] != '-')
            (*attr)->espaces[my_strlen((*attr)->espaces) - 1] = '\0';
        CHAR3_2
        my_putstr(tmp, compteur);
        FREE3
        return 1;
    }
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        CHAR2
        my_putstr(tmp3, compteur);
        FREE2
        return 1;
    }
    if ((*attr)->zero == 1) {
        print_zero(attr);
    }
    return 0;
}

int assert_di(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == 'd' || c == 'i') {
        if (bonus_di(list, c, compteur, attr) == 1)
            return 1;
        if ((*attr)->plus_sign && (*attr)->zero == 1) {
            (*attr)->espaces[0] = (*attr)->plus_sign[0];
        }
        if ((*attr)->plus_sign && (*attr)->zero == 0) {
            CHAR1
            my_putstr(tmp, compteur);
            FREE1
            return 1;
        }
        CHAR4
        my_putstr(my_strrevcat((*attr)->espaces, tmp4), compteur);
        free(tmp4);
        return 1;
    }
    return 0;
}
