/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"

int my_list_size(linked_list_t *list)
{
    linked_list_t *chaine = list;
    int count = 0;

    while (chaine != NULL){
        count++;
        chaine = chaine->next;
    }
    return count;
}
