/*
** EPITECH PROJECT, 2023
** ioansojia
** File description:
** aoijsoaijs
*/

#include <stdio.h>
#include "my_printf.h"

int print_zero(struct attributs **attr)
{
    int i = 0;

    for (i = 0 ; (*attr)->espaces[i] != '\0' ; i++) {
        (*attr)->espaces[i] = '0';
    }
    return 0;
}
