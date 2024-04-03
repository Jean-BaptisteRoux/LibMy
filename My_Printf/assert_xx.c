/*
** EPITECH PROJECT, 2023
** aiosoijas
** File description:
** aisioajs
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

void dieze_xx(va_list list, char c, int *compteur, struct attributs **attr)
{
    char *r = conv_to_hexx(va_arg(list, unsigned int));

    if ((*attr)->espaces && (*attr)->tiret == 1) {
        if (r[0] != '0')
            r = my_strcat("0x", r);
        my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
            r)), compteur);
        return;
    }
    if ((*attr)->zero == 1) {
        (*attr)->espaces[my_strlen((*attr)->espaces) - 2] = '\0';
        print_zero(attr);
        (*attr)->espaces = my_strcat2("0x", (*attr)->espaces);
        my_putstr(my_strrevcat(((*attr)->espaces), r), compteur);
        return;
    }
    if (r[0] != '0')
        r = my_strcat2("0x", r);
    my_putstr(my_strrevcat(((*attr)->espaces), r), compteur);
}

int bonus_xx(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->dieze == 1) {
        dieze_xx(list, c, compteur, attr);
        return 1;
    }
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
            conv_to_hexx(va_arg(list, unsigned int)))), compteur);
        return 1;
    }
    return 0;
}

int assert_xx(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == 'X') {
        if (bonus_xx(list, c, compteur, attr) == 1)
            return 1;
        if ((*attr)->zero == 1) {
            print_zero(attr);
        }
        my_putstr(my_strrevcat(((*attr)->espaces),
            conv_to_hexx(va_arg(list, unsigned int))), compteur);
        return 1;
    }
    return 0;
}
