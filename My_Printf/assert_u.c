/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Affiche %u
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my_printf.h"

int bonus_u(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
            my_int_to_char(va_arg(list, unsigned int)))), compteur);
        return 1;
    }
    return 0;
}

int assert_u(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == 'u') {
        if (bonus_u(list, c, compteur, attr) == 1)
            return 1;
        if ((*attr)->zero == 1) {
            print_zero(attr);
        }
        my_putstr(my_strrevcat((*attr)->espaces,
            my_int_to_char(va_arg(list, unsigned int))), compteur);
        return 1;
    }
    return 0;
}
