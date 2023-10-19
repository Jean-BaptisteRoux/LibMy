/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>

int my_strlen2(char const *str)
{
    int len = 0;

    while (str[len] != '\0'){
        len++;
    }
    return len;
}

int vde(char *str, char const *to_find, int i)
{
    int compteur = 0;
    int to_find_len = my_strlen2(to_find);

    for (int j = 0; j < to_find_len && str[i + j] != '\0'; j++) {
        if (str[i + j] != to_find[j]) {
            break;
        } else {
            compteur++;
        }
    }
    return compteur;
}

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen2(str);
    int to_find_len = my_strlen2(to_find);
    int compteur = 0;

    for (int i = 0; i < len - to_find_len; i++){
        compteur = vde(str, to_find, i);
        if (compteur == to_find_len){
            return &str[i];
        }
    }
}
