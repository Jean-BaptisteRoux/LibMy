/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
*/
#include <stdio.h>

int gestion_negatif(int neg, int affichage_value)
{
    if (neg == 1){
        affichage_value = affichage_value * (-1);
    }
    return affichage_value;
}

int gestion_affichage(char *str, int *affichage_value, int i, int *neg)
{
    if (str[i] == '-' && str[i + 1]){
        *neg = 1;
    } else if (str[i] >= '0' && str[i] <= '9') {
        *affichage_value = *affichage_value * 10;
        *affichage_value = *affichage_value + str[i] - '0';
        return *affichage_value;
    }
    return 42;
}

int my_getnbr(char const *str)
{
    int affichage_value = 0;
    int i = 0;
    int neg = 0;
    int aled;

    while (str[i] != '\0') {
        aled = gestion_affichage(str, &affichage_value, i, &neg);
        if (affichage_value != 0 && aled == 42){
            break;
        }
        i++;
    }
    affichage_value = gestion_negatif(neg, affichage_value);
    return affichage_value;
}
