/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "mylist.h"

int my_apply_on_nodes(struct linked_list *begin, int(*f)(void *))
{
    linked_list_t *list = begin;

    while (list != NULL) {
        (*f)(list->data);
        list = list->next;
    }
    return 0;
}
