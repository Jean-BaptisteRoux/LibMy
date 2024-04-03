/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"

int my_concat_list(
    linked_list_t **begin1,
    linked_list_t *begin2)
{
    linked_list_t *list = *begin1;

    while (list->next != NULL) {
        list = list->next;
    }
    list->next = begin2;
    return 0;
}
