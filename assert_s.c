/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Affiche %s
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int assert_s(va_list list, char c, int *compteur, struct attributs **attr)
{
    char *r;

    if (c == 's') {
        if ((*attr)->tiret == 1) {
            my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
                (va_arg(list, char *)))), compteur);
            return 1;
        }
        my_putstr(my_strrevcat(((*attr)->espaces),
            (va_arg(list, char *))), compteur);
        return 1;
    }
    return 0;
}
