/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include "Liste_chainees.h"

static int strl_static(char const *str)
{
    unsigned int len = 0;

    while (str[len] != '\0'){
        if (len == 4294967295){
            return -1;
        }
        len++;
    }
    return len;
}

static int my_strcmp_static(
    char *s1,
    char *s2)
{
    int i = 0;

    if (strl_static(s1) < strl_static(s2))
        return -1;
    while (s1[i] != '\0' && s2[i] != '\0'){
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}

static int delete_nodes(
    linked_list_t *begin,
    char *x,
    int tmp)
{
    linked_list_t *jsp = malloc(sizeof(linked_list_t));
    linked_list_t *list = begin;

    while (list != NULL) {
        if (my_strcmp_static(list->data, x) != 0){
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
    char *x)
{
    linked_list_t *list = *head;
    linked_list_t *reste = *head;

    while (list->next->next != NULL)
        list = list->next;
    if (my_strcmp_static(list->next->data, x) == 0){
        list->next = NULL;
        return 1;
    }
    *head = reste;
    return 0;
}

int delete_nodes_char(
    linked_list_t **head,
    char *x)
{
    linked_list_t *list = *head;

    if (list->next == NULL && my_strcmp_static(list->data, x) == 0){
        *head = NULL;
        return 0;
    }
    if (my_strcmp_static(list->data, x) == 0){
        *head = list->next;
        return 0;
    }
    if (delete_end_node(head, x) == 1)
        return 0;
    if (delete_nodes(list, x, 0) != 0)
        return 84;
    return 0;
}
