/*
** EPITECH PROJECT, 2023
** osef
** File description:
** osef
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MY_H_
    #define MY_H_

typedef struct list_linked_for_str_to_array{
    int id;
    struct list_linked_for_str_to_array *next;
} llfsta;

int strl(char const *str);

char *my_strdup(char const *src);

char **str_to_array(
    char *str
    ,char *sep
    );

char ***traitement_fichier(
    int compar,
    FILE *fd);

int printf_array(
    char **tab,
    char *end);

int my_strchr(
    char *s,
    char c);

int my_strcmp(
    char *s1,
    char *s2);

char *my_strcpy(
    char *dest,
    char *src);

int my_strcspn(
    char *str,
    char *reject);

int my_strncmp(
    char *s1,
    char *s2,
    int n);

char *my_strncpy(
    char *dest,
    char *src,
    int n);
#endif /* MY_H_ */
