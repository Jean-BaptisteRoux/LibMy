/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"


linked_list_t *my_find_node(
    linked_list_t *begin,
    void const *data_ref,
    int(*cmp)())
{
    linked_list_t *list = begin;

    while (list != NULL) {
        if ((*cmp)(list->data, data_ref) == 0){
            return list;
        }
        list = list->next;
    }
    return 0;
}
