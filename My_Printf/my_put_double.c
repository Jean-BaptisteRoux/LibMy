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

char *suite_double(double suite_entier, int affi)
{
    char *str = malloc(sizeof(char) * (affi));
    int i = 0;

    while (suite_entier < 0 || my_intlen(suite_entier) > affi)
        suite_entier /= 10;
    if (suite_entier != 0){
        for (i = 0; i < affi - 1 && my_intlen(suite_entier) < affi; i++)
            suite_entier *= 10;
        if ((suite_entier * 10)-(((int)(suite_entier)) * 10) > 5)
            suite_entier++;
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

int my_put_double2(double *nb, char **str, int *len, int lenlen)
{
    if (*nb < 0){
        *str = malloc(sizeof(char) * (lenlen + 2));
        *nb = -(*nb);
        *len = my_doublelen(*nb);
        (*str)[my_strlen(*str)] = '-';
    }else{
        *str = malloc(sizeof(char) * (lenlen + 1));
    }
    return 0;
}

char *cbloucle_my_put_double(int affi, double nb, char **str, int *len)
{
    int premier_entier = (int)nb;

    if (premier_entier + 1 == 10){
        (*str)[my_strlen(*str)] = '1';
        (*len)++;
    } else
        my_strcat2(*str, my_int_to_char1(premier_entier + 1));
}

int my_put_double3(double *nb, char **str, int *len, int affi)
{
    int premier_entier;
    double test = 1e+1;

    premier_entier = (*nb) / power(&test, (*len) - 1);
    (*nb) -= premier_entier * power(&test, (*len) - 1);
    if (affi != 0){
        (*str)[my_strlen(*str)] = ((int)premier_entier) + '0';
        (*str)[my_strlen(*str)] = '.';
        if (*nb < 1)
            *nb *= 10;
        *str = my_strcat(*str, suite_double(*nb, affi));
    }else if (((*nb) * 10)-(((int)(*nb)) * 10) > 5){
        cbloucle_my_put_double(affi, *nb, str, len);
    }
    return 0;
}

char *my_put_double(double nb, int affi)
{
    int len = my_doublelen(nb);
    int lenlen = my_intlen(len - 1) + 4 + affi;
    int coeff = affi - (my_intlen(nb) - 1);
    char *str;

    my_put_double2(&nb, &str, &len, lenlen);
    my_put_double3(&nb, &str, &len, affi);
    str[my_strlen(str)] = 'e';
    if (len - 1 >= 0)
        str[my_strlen(str)] = '+';
    if (len - 1 < 0){
        str[my_strlen(str)] = '-';
        len = -len + 1;
    }
    if (len - 1 < 10 && len - 1 > -10)
        str[my_strlen(str)] = '0';
    if (len - 1 == 0)
        str[my_strlen(str)] = '0';
    return my_strcat(str, my_int_to_char1(len - 1));
}
