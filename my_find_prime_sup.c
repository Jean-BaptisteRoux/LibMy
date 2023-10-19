/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>

int search_prime(int nb, int i)
{
    if (i >= nb ) {
        return 1;
    } else if (nb % i == 0){
        return 0;
    } else {
        return search_prime(nb, i + 1);
    }
}

int find_sup_prime(int nb)
{
    if (search_prime(nb, 2) != 1){
        return find_sup_prime(nb + 1);
    } else {
        return nb;
    }
}

int my_find_prime_sup(int nb)
{
    if (nb <= 1){
        return 0;
    } else if (search_prime(nb, 2) != 1){
        return find_sup_prime(nb + 1);
    } else {
        return nb;
    }
}
