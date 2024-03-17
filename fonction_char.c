/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** Ensemble de fonction liées à char
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "printf.h"

void my_putchar(char c, int *compteur)
{
    write(1, &c, 1);
    (*compteur)++;
}

int my_isnum(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

char *my_int_to_char1(long long a)
{
    char *r = malloc(sizeof(char) * (my_intlen(a) + 2));
    int i = 0;
    int neg = 0;

    if (a < 0) {
        neg = 1;
        a = -a;
    }
    for (i = 0 ; a != 0 ; i++) {
        r[i] = (a % 10) + 48;
        a = a / 10;
    }
    if (neg == 1) {
        r = my_strcat2(r, "-");
    } else {
        r[i] = '\0';
    }
    r = my_revstr(r);
    return r;
}

void my_int_to_char2(long long *a, int *i, char **r)
{
    for ((*i) = 0 ; *a != 0 ; (*i)++) {
        (*r)[*i] = ((*a) % 10) + 48;
        (*a) = (*a) / 10;
    }
}

char *my_int_to_char(long long a)
{
    char *r = malloc(sizeof(char) * (my_intlen(a) + 2));
    int i = 0;
    int neg = 0;

    if (a == 0)
        return "0";
    if (a < 0) {
        neg = 1;
        a = -a;
    }
    my_int_to_char2(&a, &i, &r);
    if (neg == 1) {
        r = my_strcat2(r, "-");
    } else {
        r[i] = '\0';
    }
    r = my_revstr(r);
    return r;
}
