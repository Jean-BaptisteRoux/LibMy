/*
** EPITECH PROJECT, 2023
** oiahisouha
** File description:
** ibsaisuhuiah
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "my_printf.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;
    char *r = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    for (i = 0 ; dest[i] != '\0' ; i++) {
        if (dest[0] == '+' && src[0] == '-') {
            break;
        }
        r[i] = dest[i];
    }
    for (a = 0 ; src[a] != '\0' ; a++) {
        r[i] = src[a];
        i++;
    }
    r[i] = '\0';
    return r;
}

char *my_strcat2(char *dest, char const *src)
{
    int i = 0;
    int a = 0;
    char *r = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    for (i = 0 ; dest[i] != '\0' ; i++) {
        r[i] = dest[i];
    }
    for (a = 0 ; src[a] != '\0' ; a++) {
        r[i] = src[a];
        i++;
    }
    r[i] = '\0';
    return r;
}

char *my_justify_text(char *str)
{
    int len = my_strlen(str);
    char *r = malloc(sizeof(char) * len);
    int i = 0;
    int j = 0;

    while (str[i] == ' ')
        i++;
    while (str[i] != '\0') {
        r[j] = str[i];
        i++;
        j++;
    }
    for (i = 0 ; str[i] == ' ' ; i++) {
        r[j] = str[i];
        j++;
    }
    r[i] = '\0';
    return r;
}
