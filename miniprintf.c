/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>
#include <stdarg.h>
#include "my.h"



int vision(char c, va_list list_arg, int *compteur)
{
    switch (c){
        case 'd':
            pnbrc(va_arg(list_arg, int), compteur);
            return 0;
        case 'c':
            pcharc(va_arg(list_arg, int), compteur);
            return 0;
        case 'i':
            pnbrc(va_arg(list_arg, int), compteur);
            return 0;
        case 's':
            pstrc(va_arg(list_arg, char *), compteur);
            return 0;
        case '%':
            pcharc('%', compteur);
            return 0;
        default:
            return 84;
        }
}

void suite_condition(char const *c, int i, int *compteur)
{
    if (c[i - 1] != '%'){
        pcharc(c[i], compteur);
    }
}

int condition(char const *c, int i, va_list list_arg, int *compteur)
{
    int tmp;

    if (c[i] == '%' && (c[i - 1] != '%' || c[i - 2] == '%')){
        tmp = vision(c[i + 1], list_arg, compteur);
        if (tmp == 84){
            return 84;
        }
    }else{
        suite_condition(c, i, compteur);
    return 1;
    }
    return 0;
}

int print(char const *format, ...)
{
    int i = 0;
    int compteur = 0;
    int tmp;
    va_list list_arg;

    va_start(list_arg, format);
    if (format == NULL){
        return -1;
    }
    while (format[i] != '\0'){
        tmp = condition(format, i, list_arg, &compteur);
        if (tmp == 84){
            return -1;
        }
        i++;
    }
    va_end(list_arg);
    return compteur;
}
