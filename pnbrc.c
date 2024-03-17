/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** Permet d'afficher un nombre entier
*/
#include "my.h"

int getpower(int num)
{
    int puissance;
    int nbtest;

    if (num < 0) {
        num = num * (-1);
        write(1, "-", 1);
    }
    nbtest = num;
    puissance = 0;
    while (nbtest > 0) {
        if (puissance == 0) {
            nbtest = nbtest / 10;
            puissance = 1;
        } else {
        nbtest = nbtest / 10;
        puissance *= 10;
        }
    }
    return (puissance);
}

int pnbrc(int nb, int *compteur)
{
    int powernb;
    int chiffre = 0;

    if (nb == 0){
        write(1, "0", 1);
    }
    powernb = getpower(nb);
    if (nb < 0) {
        nb = nb * (-1);
    }
    while (powernb > 0) {
        while (nb >= powernb) {
            nb -= powernb;
            chiffre++;
        }
        pcharc(chiffre + 48, compteur);
        powernb /= 10;
        chiffre = 0;
    }
    return 0;
}
