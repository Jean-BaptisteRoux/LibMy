/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Affiche %%
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

int assert_pourcent(va_list list, char c, int *compt, struct attributs **attr)
{
    if (c == '%') {
        my_putchar('%', compt);
        return 1;
    }
    return 0;
}
