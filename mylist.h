/*
** EPITECH PROJECT, 2023
** osef
** File description:
** osef
*/
#include <stdio.h>
#include <stdlib.h>
#ifndef MY_H_
    #define MY_H_
typedef struct{
    int nb;
    char *str;
} bdd ;

typedef struct linked_list{
    bdd *data;
    struct linked_list *next;
} linked_list_t ;

int my_apply_on_nodes(struct linked_list *begin, int(*f)(void *));
int my_delete_nodes(struct linked_list *begin,
    void const *data_ref, int(*cmp)());
int my_apply_on_matching_nodes(struct linked_list *begin,
    int(*f)(), void const *data_ref, int(*cmp)());
void my_rev_list(struct linked_list **begin);
int my_put_in_list(struct linked_list **list, bdd *data);
linked_list_t *my_params_to_list(int ac, bdd * const *av);
int my_list_size(struct linked_list *list);
linked_list_t * my_find_node(struct linked_list *begin,
    void const *data_ref, int(*cmp)());
#endif /* MY_H_ */
