/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "mylist.h"

int my_apply_on_matching_nodes(struct linked_list *begin,
    int(*f)(), void const *data_ref, int(*cmp)())
{
    linked_list_t *list = begin;

    while (list != NULL) {
        if ((*cmp)(list->data, data_ref) == 0)
            (*f)(list->data);
        list = list->next;
    }
    return 0;
}
