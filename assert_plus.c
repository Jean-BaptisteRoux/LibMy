/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Indique le flags en +
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int assert_plus(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == '+') {
        (*attr)->plus_sign = malloc(sizeof(char) + 1);
        (*attr)->plus_sign[0] = '+';
        (*attr)->plus_sign[1] = '\0';
        return 1;
    }
    return 0;
}
