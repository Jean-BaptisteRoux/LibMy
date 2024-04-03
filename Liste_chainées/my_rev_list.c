/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *jsp = NULL;
    linked_list_t *mdr = NULL;
    linked_list_t *osef = *begin;

    while (osef != NULL) {
        mdr = osef->next;
        osef->next = jsp;
        jsp = osef;
        osef = mdr;
    }
    *begin = jsp;
}
