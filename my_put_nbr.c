/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** file
*/
int getpower(int num)
{
    int puissance;
    int nbtest;

    if (num < 0) {
        num = num * (-1);
        my_putchar('-');
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

int my_put_nbr(int nb)
{
    int powernb;
    int chiffre = 0;

    if (nb == 0){
        my_putchar(48);
    }
    powernb = getpower(nb);
    if (nb < 0) {
        nb = nb * (-1);
    }
    while (nb > 0) {
        while (nb >= powernb) {
            nb -= powernb;
            chiffre++;
        }
        my_putchar(chiffre + 48);
        powernb /= 10;
        chiffre = 0;
    }
}
