/*
** EPITECH PROJECT, 2023
** osef
** File description:
** osef
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef MY_LISTE_CHAINEES
    #define MY_LISTE_CHAINEES
typedef struct linked_list{
    char *data;
    int id;
    struct linked_list *next;
} linked_list_t ;

linked_list_t *create_list_link(
    char **av);

void append_to_list_link(
    linked_list_t **list,
    void *data);

int application_to_the_corresponding_node(
    linked_list_t *begin,
    int(*f)(),
    void *data_ref,
    int(*cmp)());

int my_concat_list(
    linked_list_t **begin1,
    linked_list_t *begin2);

linked_list_t *my_find_node(
    linked_list_t *begin,
    void const *data_ref,
    int(*cmp)());

int my_list_size(linked_list_t *list);

void my_rev_list(linked_list_t **begin);

int printf_list(
    linked_list_t *tab,
    char *end);

int application_to_the_node(
    struct linked_list *begin,
    int(*f)(void *));

int delete_nodes_id(
    linked_list_t **head,
    int x);

int delete_nodes_char(
    linked_list_t **head,
    char *x);

#endif
