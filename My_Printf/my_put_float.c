/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>
#include <stdlib.h>
#include "my_printf.h"

double boucle_suite_float(double suite_entier, int affi)
{
    for (int i = 0; i < affi; i++){
        suite_entier *= 10;
    }
    return suite_entier;
}

char *suite_float(double suite_entier, int affi, int tmp)
{
    char *str = malloc(sizeof(char) * (affi));
    int i = 0;

    while (suite_entier < 0){
        suite_entier /= 10;
    }
    if (suite_entier != 0){
        suite_entier = boucle_suite_float(suite_entier, affi);
        if ((suite_entier * 10)-(((int)(suite_entier)) * 10) > 5){
            suite_entier++;
        }
        return my_int_to_char1(suite_entier);
    }else{
        while (affi > 0){
            str[i] = '0';
            affi--;
            i++;
        }
    }
    return str;
}

char *cbloucle_my_put_float(int affi, double nb, char *str, int *len)
{
    int premier_entier = (int)nb;

    if (premier_entier + 1 == 10){
        str[my_strlen(str)] = '1';
        (*len)++;
    }else{
        my_strcat2(str, my_int_to_char1(premier_entier + 1));
    }
}

char *condition_my_put_float(int affi, double nb, char *str, int tmp)
{
    int len = my_doublelen(nb);
    int premier_entier = (int)nb;

    nb -= premier_entier;
    if (affi != 0){
        if (nb == 0 && premier_entier == 0){
            str = my_strcat(str, "0");
        }else{
            str = my_strcat(str, my_int_to_char1(premier_entier));
        }
        str[my_strlen(str)] = '.';
        str = my_strcat(str, suite_float(nb, affi, tmp));
    }else if ((nb * 10)-(((int)(nb)) * 10) > 5){
        cbloucle_my_put_float(affi, nb, str, &len);
    }
}

char *my_put_float(double nb, int affi)
{
    int len = my_doublelen(nb);
    int lenlen = my_intlen(len - 1) + 4 + affi;
    double test = 1e+1;
    int premier_entier;
    char *str;
    int tmp = 1;

    if (nb < 0){
        str = malloc(sizeof(char) * (lenlen + 2));
        nb = -nb;
        len = my_doublelen(nb);
        str[my_strlen(str)] = '-';
        tmp = -1;
    }else{
        str = malloc(sizeof(char) * (lenlen + 1));
    }
    return condition_my_put_float(affi, nb, str, tmp);
}
