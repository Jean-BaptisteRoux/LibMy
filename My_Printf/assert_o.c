/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Affiche %o
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

void dieze_o(va_list list, char c, int *compteur, struct attributs **attr)
{
    char *r = conv_to_oct(va_arg(list, unsigned int));

    if ((*attr)->espaces && (*attr)->tiret == 1) {
        if (r[0] != '0')
            r = my_strcat("0", r);
        my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
            r)), compteur);
        return;
    }
    if ((*attr)->zero == 1) {
        (*attr)->espaces[my_strlen((*attr)->espaces) - 1] = '\0';
        print_zero(attr);
        (*attr)->espaces = my_strcat2("0", (*attr)->espaces);
        my_putstr(my_strrevcat(((*attr)->espaces), r), compteur);
        return;
    }
    if (r[0] != '0')
        r = my_strcat2("0", r);
    my_putstr(my_strrevcat(((*attr)->espaces), r), compteur);
}

int bonus_o(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->dieze == 1) {
        dieze_o(list, c, compteur, attr);
        return 1;
    }
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
            conv_to_oct(va_arg(list, unsigned int)))), compteur);
        return 1;
    }
    return 0;
}

int assert_o(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == 'o') {
        if (bonus_o(list, c, compteur, attr) == 1)
            return 1;
        if ((*attr)->zero == 1) {
            print_zero(attr);
        }
        my_putstr(my_strrevcat(((*attr)->espaces),
            conv_to_oct(va_arg(list, unsigned int))), compteur);
        return 1;
    }
    return 0;
}

char *conv_to_oct(long long a)
{
    char *r = malloc(sizeof(char) * (my_intlen(a) + 2));
    int i = 0;

    if (a == 0)
        return "0\0";
    for (i = 0 ; a > 0 ; i++) {
        r[i] = a % 8 + 48;
        a = a / 8;
    }
    r[i] = '\0';
    r = my_revstr(r);
    return r;
}
