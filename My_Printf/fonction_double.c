/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** test
** test
*/
#include <stdio.h>
#include <stdlib.h>
#include "my_printf.h"

int my_doublelen(double num)
{
    int puissance = 0;
    double nbtest;

    if (num < 0){
        num = -num;
    }
    nbtest = num;
    while (nbtest > 1e+0) {
        if (puissance == 0) {
            nbtest = nbtest / 10;
            puissance++;
        } else {
        nbtest = nbtest / 10;
        puissance ++;
        }
    }
    return (puissance);
}
