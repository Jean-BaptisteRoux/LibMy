/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"
#include "my.h"

void append_to_list_link(
    linked_list_t **list,
    void *data)
{
    linked_list_t *chaine;

    chaine = malloc(sizeof(linked_list_t));
    chaine->next = *list;
    chaine->data = my_strdup(data);
    *list = chaine;
}

linked_list_t *create_list_link(
    char **av)
{
    linked_list_t *list = NULL;

    for (int i = 0; av[i] != NULL; i++) {
        append_to_list_link(&list, av[i]);
        // printf("coucou%s\n",av[i]);
    }
    return list;
}
