/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>

int search_square(int nb, int i)
{
    if (i * i == nb) {
        return i;
    } else if(i * i > nb) {
        return 0;
    } else {
        return search_square(nb, i + 1);
    }
}

int my_compute_square_root(int nb)
{
    if (nb >= 2147395600 || nb <= 0){
        return 0;
    } else {
    return search_square(nb, 1);
    }
}
