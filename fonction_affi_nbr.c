/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** test
** test
*/
#include <stdio.h>
#include "printf.h"

int my_put_long(long long nb, int *compteur)
{
    if (nb < 0) {
        my_putchar('-', compteur);
        nb = -nb;
    }
    if (nb < 10) {
        my_putchar('0' + nb, compteur);
    } else {
        my_put_long(nb / 10, compteur);
        my_putchar('0' + (nb % 10), compteur);
    }
    return (0);
}

int my_put_nbr(int nb, int *compteur)
{
    my_put_long((long long) nb, compteur);
    return (0);
}

int my_put_unbr(unsigned int nb, int *compteur)
{
    my_put_long((long long) nb, compteur);
    return (0);
}

int my_put_plus_nbr(int nb, int *compteur)
{
    my_put_long((long long) nb, compteur);
    if (nb > 0)
        my_putchar('+', compteur);
    return (0);
}
