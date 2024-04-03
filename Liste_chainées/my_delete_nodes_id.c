/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"

static int delete_nodes(
    linked_list_t *begin,
    int x,
    int tmp)
{
    linked_list_t *jsp = malloc(sizeof(linked_list_t));
    linked_list_t *list = begin;

    while (list != NULL) {
        if (list->id != x){
            jsp->data = list->data;
            jsp->id = list->id;
            jsp->next = list->next;
            jsp = jsp->next;
        } else
            tmp++;
        list = list->next;
    }
    begin = jsp;
    if (tmp == 0)
        return 84;
    return 0;
}

static int delete_end_node(
    linked_list_t **head,
    int x)
{
    linked_list_t *list = *head;
    linked_list_t *reste = *head;

    while (list->next->next != NULL)
        list = list->next;
    if (list->next->id == x){
        list->next = NULL;
        return 1;
    }
    *head = reste;
    return 0;
}

int delete_nodes_id(
    linked_list_t **head,
    int x)
{
    linked_list_t *list = *head;

    if (list->next == NULL && list->id == x){
        *head = NULL;
        return 0;
    }
    if (list->id == x){
        *head = list->next;
        return 0;
    }
    if (delete_end_node(head, x) == 1)
        return 0;
    if (delete_nodes(list, x, 0) != 0)
        return 84;
    return 0;
}
