/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Ensemble de fonction liées à str
*/
#include <stdio.h>
#include <stdlib.h>
#include "printf.h"

void my_putstr(char const *str, int *compteur)
{
    int i;

    if (str == NULL)
        return;
    for (i = 0 ; str[i] != '\0' ; i++) {
        my_putchar(str[i], compteur);
    }
}

int my_strlen(char const *str)
{
    int a;

    if (str == NULL)
        return -1;
    for (a = 0 ; str[a] != '\0' ; a++);
    return (a);
}

int my_strrevcatbonus(int *x, int *i, char *b, char **r)
{
    for (*x = *x ; b[*x] != '\0' ; (*x)++) {
        (*r)[*i] = b[*x];
        (*i)++;
    }
    (*r)[*i] = '\0';
    return 0;
}

char *my_strrevcat(char *a, char *b)
{
    int i = 0;
    int x = 0;
    int n = my_strlen(a) - my_strlen(b);
    char *r = malloc(sizeof(char) *
        (my_strlen(a) + my_strlen(b)  + 1));

    if (n <= 0)
        return b;
    for (i = 0 ; i < n ; i++)
        r[i] = a[i];
    if (b[0] == '-' && a[2] == '0') {
        r[0] = '-';
        x = 1;
        r[i] = '0';
        i++;
    }
    my_strrevcatbonus(&x, &i, b, &r);
    return r;
}

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int i = 0;
    int a = 0;
    char *r = malloc(sizeof(char) * (len + 1));

    r[len] = '\0';
    for (i = len - 1 ; i >= 0 ; i--) {
        r[a] = str[i];
        a++;
    }
    return r;
}
