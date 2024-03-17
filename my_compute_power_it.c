/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

double pw(int nb ,int p)
{
    double nb_power = nb;

    if (p == 0){
        return 1;
    } else if (p < 0) {
        return 0;
    } else {
        for (int i = 0; i != p - 1; i++) {
            nb_power *= nb;
        }
    }
    return nb_power;
}
