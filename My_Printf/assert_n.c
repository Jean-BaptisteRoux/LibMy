/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Éxecute %n
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

int asrt_n(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == 'n') {
        *(va_arg(list, int *)) = *compteur;
        return 1;
    }
    return 0;
}
