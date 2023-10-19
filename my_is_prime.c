/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>

int search_prime2(int nb, int i)
{
    if (i >= nb ){
        return 1;
    } else if (nb % i == 0){
        return 0;
    } else {
        return search_prime2(nb, i + 1);
    }
}

int my_is_prime(int nb)
{
    if (nb <= 1){
        return 0;
    } else {
        return search_prime2(nb, 2);
    }
}
