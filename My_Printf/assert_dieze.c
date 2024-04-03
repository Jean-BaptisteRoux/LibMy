/*
** EPITECH PROJECT, 2023
** aiusuas
** File description:
** Affiche le nombre en hexadécimal
*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

int assert_dieze(va_list list, char c, int *compteur, struct attributs **attr)
{
    if (c == '#') {
        (*attr)->dieze = 1;
        return 1;
    }
    return 0;
}
