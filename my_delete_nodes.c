// /*
// ** EPITECH PROJECT, 2023
// ** ProjectDay03
// ** File description:
// ** test
// ** test
// */
// #include "mylist.h"

// int my_delete_nodes(struct linked_list *begin,
//     void const *data_ref, int(*cmp)())
// {
//     linked_list_t *jsp = begin;
//     linked_list_t *list = begin;

//     while (list != NULL) {
//         if ((*cmp)(list->data, data_ref) != 0){
//             jsp->next = list;
//         }
//         list = list->next;
//     }
//     begin = list->next;
//     return 0;
// }

// int my_delete_nodes(struct linked_list *begin, int x, int tmp)
// {
//     linked_list_t *jsp = malloc(sizeof(linked_list_t));
//     linked_list_t *list = begin;

//     while (list != NULL) {
//         if (list->id != x){
//             jsp->type = list->type;
//             jsp->name = list->name;
//             jsp->id = list->id;
//             jsp->next = list->next;
//             jsp = jsp->next;
//         } else {
//             tmp++;
//             affi(list);
//         }
//         list = list->next;
//     }
//     begin = jsp;
//     if (tmp == 0)
//         return 84;
// }

// int delete2(linked_list_t **head, int x)
// {
//     linked_list_t *list = *head;
//     linked_list_t *reste = *head;

//     while (list->next->next != NULL)
//         list = list->next;
//     if (list->next->id == x){
//         affi(list->next);
//         list->next = NULL;
//         return 1;
//     }
//     *head = reste;
//     return 0;
// }

// static int condition10(linked_list_t **head, int x)
// {
//     linked_list_t *list = *head;

//     if (list->next == NULL && list->id == x){
//         *head = NULL;
//         affi(list);
//         return 0;
//     }
//     if (list->id == x){
//         *head = list->next;
//         affi(list);
//         return 0;
//     }
//     if (delete2(head, x) == 1)
//         return 0;
//     if (my_delete_nodes(list, x, 0) != 0)
//         return 84;
//     return 0;
// }

// static int delete(void *data, char **args)
// {
//     linked_list_t **head = (linked_list_t **)data;

//     for (int i = 0; args[i] != NULL; i++){
//         if (condition10(head, getnbr(args[i])) != 0)
//             return 84;
//     }
//     return 0;
// }

// int del(void *data, char **args)
// {
//     linked_list_t **head = (linked_list_t **)data;
//     linked_list_t *list = *head;

//     if (args[0] == NULL || list == NULL)
//         return 84;
//     if (delete(head, args) == 84)
//         return 84;
//     return 0;
// }