/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "my.h"

static int vde(char *str, char const *to_find, int i)
{
    int compteur = 0;
    int to_find_len = strl(to_find);

    for (int j = 0; j < to_find_len && str[i + j] != '\0'; j++) {
        if (str[i + j] != to_find[j])
            break;
        else
            compteur++;
    }
    return compteur;
}

char *my_strstr(char *str, char const *to_find)
{
    int len = strl(str);
    int to_find_len = strl(to_find);
    int compteur = 0;

    for (int i = 0; i < len - to_find_len; i++){
        compteur = vde(str, to_find, i);
        if (compteur == to_find_len)
            return &str[i];
    }
    return "";
}
