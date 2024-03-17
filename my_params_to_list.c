/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "mylist.h"

int my_put_in_list(struct linked_list **list, bdd *data)
{
    linked_list_t *chaine;

    chaine = malloc(sizeof(linked_list_t));
    chaine->next = *list;
    chaine->data = data;
    *list = chaine;
    return 0;
}

linked_list_t *my_params_to_list(int ac, bdd * const *av)
{
    int i;
    linked_list_t *list = NULL;

    for (i = 0 ; i < ac ; i++) {
        my_put_in_list(&list, av[i]);
    }
    return list;
}
