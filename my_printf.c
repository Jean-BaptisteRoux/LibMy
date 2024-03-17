/*
** EPITECH PROJECT, 2023
** uavsuih
** File description:
** uygasiusa
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "printf.h"

int set_attributs(va_list list, char c, int *compteur, struct attributs **attr)
{
    int (*func_attributs[])(va_list, char, int *, struct attributs **) = {
        assert_dieze, assert_espace, assert_plus, assert_tiret};
    int i = 0;

    for (i = 0 ; i < 4 ; i++)
        if ((*func_attributs[i])(list, c, compteur, attr) == 1)
            return 1;
    return 0;
}

int set_espaces2(struct attributs **attr,
    const char *restrict format, int *compteur, int *a)
{
    if (format[*a] == '0') {
        (*attr)->zero = 1;
    }else {
        (*attr)->zero = 0;
    }
    return 0;
}

int set_espaces(struct attributs **attr,
    const char *restrict format, int *compteur, int *a)
{
    int nb_espaces = 0;
    int i = 0;

    if ((*attr)->espaces)
        return 0;
    set_espaces2(attr, format, compteur, a);
    nb_espaces += my_getnbr(format + (*a) + (*attr)->zero);
    if (nb_espaces == 0) {
        get_affi(attr, format, compteur, a);
        return 0;
    }
    (*a) += my_intlen(nb_espaces);
    (*attr)->espaces = malloc(sizeof(char) * nb_espaces + 1);
    for (i = 0 ; nb_espaces > 0 ; i++) {
        (*attr)->espaces[i] = ' ';
        nb_espaces--;
    }
    (*attr)->espaces[i] = '\0';
    get_affi(attr, format, compteur, a);
    return 1;
}

int disp_stdarg(va_list list,
    const char *restrict format, int *compteur, int *a)
{
    struct attributs *attr = malloc(sizeof(struct attributs) + 1);
    int (*func_format[])(va_list, char, int *, struct attributs **) = {
        assert_c, assert_s, assert_di, assert_pourcent, assert_o, assert_e,
        assert_x, assert_xx, assert_u, assert_p, assert_cc, asrt_n, asrt_f};
    int i = def_i(a, &attr);

    for (i = 0 ; i < 13 ; i++) {
        if (format[*a] == '\0')
            return 1;
        if (set_attributs(list, format[*a], compteur, &attr) == 1) {
            ai(a, &i);
            continue;
        }
        set_espaces(&attr, format, compteur, a);
        if ((*func_format[i])(list, format[*a], compteur, &attr) == 1)
            return 0;
        if (check_i(a, &i) == 1)
            continue;
    }
}

int my_printf(const char *restrict format, ...)
{
    int i = 0;
    int error = 0;
    int compteur = 0;
    va_list list;

    if (format == NULL)
        return -1;
    va_start(list, format);
    for (i = 0 ; format[i] != '\0' ; i++) {
        if (error != 0)
            return -1;
        if (format[i] == '%') {
            error = disp_stdarg(list, format, &compteur, &i);
            continue;
        }
        my_putchar(format[i], &compteur);
    }
    va_end(list);
    return compteur;
}
