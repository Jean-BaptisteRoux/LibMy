/*
** EPITECH PROJECT, 2023
** aoijsijas
** File description:
** iuashiahiush
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

int bonus_e(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->espaces && (*attr)->tiret == 1 && (*attr)->plus_sign) {
        (*attr)->espaces = my_justify_text(my_strcat((*attr)->espaces,
            my_put_double(va_arg(list, double), (*attr)->affi)));
        if ((*attr)->espaces[0] != '-')
            (*attr)->espaces[my_strlen((*attr)->espaces) - 1] = '\0';
        my_putstr(my_strcat((*attr)->plus_sign,
            (*attr)->espaces), compteur);
        return 1;
    }
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        my_putstr(my_justify_text(my_strcat((*attr)->espaces,
            my_put_double(va_arg(list, double), (*attr)->affi))), compteur);
        return 1;
    }
    if ((*attr)->zero == 1) {
        print_zero(attr);
    }
    return 0;
}

int assert_e(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == 'e') {
        if (bonus_e(list, c, compteur, attr) == 1)
            return 1;
        if ((*attr)->plus_sign && (*attr)->zero == 1) {
            (*attr)->espaces[0] = (*attr)->plus_sign[0];
        }
        if ((*attr)->plus_sign && (*attr)->zero == 0) {
            my_putstr(my_strrevcat((*attr)->espaces,
                my_strcat((*attr)->plus_sign,
                my_put_double(va_arg(list, double), (*attr)->affi))),
                    compteur);
            return 1;
        }
        my_putstr(my_strrevcat((*attr)->espaces,
            my_put_double(va_arg(list, double), (*attr)->affi)), compteur);
        return 1;
    }
    return 0;
}
