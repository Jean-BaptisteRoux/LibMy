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
#include "printf.h"

int bonus_di(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->espaces && (*attr)->tiret == 1 && (*attr)->plus_sign) {
        (*attr)->espaces = my_justify_text(my_strcat((*attr)->espaces,
            my_int_to_char(va_arg(list, int))));
        if ((*attr)->espaces[0] != '-')
            (*attr)->espaces[my_strlen((*attr)->espaces) - 1] = '\0';
        my_putstr(my_strcat((*attr)->plus_sign,
            (*attr)->espaces), compteur);
        return 1;
    }
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        my_putstr(my_justify_text(my_strcat((*attr)->espaces,
            my_int_to_char(va_arg(list, int)))), compteur);
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
            my_putstr(my_strrevcat((*attr)->espaces,
                my_strcat((*attr)->plus_sign,
                my_int_to_char(va_arg(list, int)))), compteur);
            return 1;
        }
        my_putstr(my_strrevcat((*attr)->espaces,
            my_int_to_char(va_arg(list, int))), compteur);
        return 1;
    }
    return 0;
}
