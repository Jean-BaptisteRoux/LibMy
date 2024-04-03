/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** Gestion de l'option d
*/
#include "my.h"

char *strcon(const char *str1, const char *str2, char separateur)
{
    int lenStr1 = strl(str1);
    int lenStr2 = strl(str2);
    char *result = malloc((lenStr1 + lenStr2 + 2) * sizeof(char));
    int i = 0;

    for (; i < lenStr1; ++i)
        result[i] = str1[i];
    if (separateur != 0)
        result[i] = '/';
    lenStr1++;
    for (int j = 0; j <= lenStr2; ++j)
        result[lenStr1 + j] = str2[j];
    return result;
}
