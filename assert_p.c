/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Affiche %p
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>
#include "printf.h"

int bonus_p(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->plus_sign && (*attr)->tiret == 1) {
        (*attr)->espaces[(my_strlen((*attr)->espaces)) - 3] = '\0';
        my_putstr((*attr)->plus_sign, compteur);
        my_putstr("0x", compteur);
        my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
            adr_hex(va_arg(list, void *)))), compteur);
        return 1;
    }
    if ((*attr)->tiret == 1) {
        (*attr)->espaces[(my_strlen((*attr)->espaces)) - 2] = '\0';
        my_putstr("0x", compteur);
        my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
            adr_hex(va_arg(list, void *)))), compteur);
        return 1;
    }
    return 0;
}

int test1_p(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (bonus_p(list, c, compteur, attr) == 1)
        return 1;
    if ((*attr)->plus_sign && (*attr)->zero == 1) {
        print_zero(attr);
        (*attr)->espaces[(my_strlen((*attr)->espaces)) - 3] = '\0';
        my_putstr((*attr)->plus_sign, compteur);
        my_putstr("0x", compteur);
        my_putstr(my_strrevcat((*attr)->espaces,
            adr_hex(va_arg(list, void *))), compteur);
        return 1;
    }
    if ((*attr)->plus_sign) {
        (*attr)->plus_sign = my_strcat2((*attr)->plus_sign, "0x");
        my_putstr(my_strrevcat((*attr)->espaces,
            my_strcat((*attr)->plus_sign,
            adr_hex(va_arg(list, void *)))), compteur);
        return 1;
    }
    return 0;
}

int assert_p(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == 'p') {
        if (test1_p(list, c, compteur, attr) == 1)
            return 1;
        my_putstr(my_strrevcat((*attr)->espaces,
            my_strcat("0x", adr_hex(va_arg(list, void *)))), compteur);
        return 1;
    }
    return 0;
}

char *adr_hex(void *paddress)
{
    int i;
    uintptr_t p = (uintptr_t)paddress;

    return conv_to_hex(p);
}
