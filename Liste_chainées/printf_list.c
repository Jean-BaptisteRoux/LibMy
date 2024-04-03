/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** test
** test
*/
#include "Liste_chainees.h"
#include "my.h"

int printf_list(
    linked_list_t *tab,
    char *end)
{
    while (tab != NULL){
        write(1, tab->data, strl(tab->data));
        if (tab->next != NULL)
            write(1, end, strl(end));
        tab = tab->next;
    }
    return 0;
}