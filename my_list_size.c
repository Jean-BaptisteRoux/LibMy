/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "mylist.h"

int my_list_size(struct linked_list *list)
{
    struct linked_list *chaine = list;
    int count = 0;

    while (chaine != NULL){
        count++;
        chaine = chaine->next;
    }
    return count;
}
