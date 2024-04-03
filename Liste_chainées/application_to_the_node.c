/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"

int application_to_the_node(
    struct linked_list *begin,
    int(*f)(void *))
{
    linked_list_t *list = begin;

    while (list != NULL) {
        (*f)(list->data);
        list = list->next;
    }
    return 0;
}
