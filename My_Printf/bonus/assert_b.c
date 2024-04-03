/*
** EPITECH PROJECT, 2023
** iauhsuha
** File description:
** saiushiusah
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

void dieze_b(va_list list, char c, int *compteur, struct attributs **attr)
{
    char *r = my_put_void(conv_to_bin(va_arg(list, unsigned int)));

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

int bonus_b(va_list list, char c, int *compteur, struct attributs **attr)
{
    if ((*attr)->dieze == 1) {
        dieze_b(list, c, compteur, attr);
        return 1;
    }
    if ((*attr)->espaces && (*attr)->tiret == 1) {
        my_putstr(my_justify_text(my_strcat2((*attr)->espaces,
            my_put_void(conv_to_bin(va_arg(list, unsigned int))))),
            compteur);
        return 1;
    }
    return 0;
}

int assert_b(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == 'b') {
        if (bonus_b(list, c, compteur, attr) == 1)
            return 1;
        if ((*attr)->zero == 1) {
            print_zero(attr);
        }
        my_putstr(my_strrevcat(((*attr)->espaces),
            my_put_void(conv_to_bin(va_arg(list, unsigned int)))),
            compteur);
        return 1;
    }
    return 0;
}

char *conv_to_bin(long long a)
{
    long long i = 0;
    long long b = 1;
    char *r = malloc(sizeof(char) * (64 + 1));

    r[64] = '\0';
    for (i = 63 ; i >= 0 ; i--) {
        if ((a & b) >= 1) {
            r[i] = '1';
        } else {
            r[i] = '0';
        }
        b = b << 1;
    }
    return r;
}

char *my_put_void(char *s)
{
    int i = 0;
    int a = 0;
    int check = 0;
    int b = 0;
    char *r = malloc(sizeof(char) * my_strlen(s) + 1);

    for (i = 0 ; s[i] != '\0' ; i++) {
        if (s[i] != '0')
            check = 1;
        if (check == 1) {
            r[a] = s[i];
            a++;
        }
    }
    if (check == 0)
        return "0";
    r[i] = '\0';
    return r;
}
