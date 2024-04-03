/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my_printf.h"

double power_nb(double nb, int p)
{
    double nb_power = nb;

    for (int i = 0; i != p - 1; i++) {
        nb_power *= nb;
    }
    return nb_power;
}

double power(double *nb, int p)
{
    if (p == 0){
        return 1;
    } else if (p < 0) {
        return 0;
    } else {
        return power_nb(*nb, p);
    }
}
