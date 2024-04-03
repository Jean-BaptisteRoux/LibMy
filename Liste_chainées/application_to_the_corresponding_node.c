/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"

int application_to_the_corresponding_node(
    linked_list_t *begin,
    int(*f)(),
    void *data_ref,
    int(*cmp)())
{
    linked_list_t *list = begin;

    while (list != NULL) {
        if ((*cmp)(list->data, data_ref) == 0){
            (*f)(list->data);
        }
        list = list->next;
    }
    return 0;
}
