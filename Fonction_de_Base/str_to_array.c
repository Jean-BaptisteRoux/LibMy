/*
** EPITECH PROJECT, 2023
** ProjectDay
** File description:
** test
** test
*/
#include "my.h"

static int len_linked_list_tmp_llfsta(llfsta *list)
{
    llfsta *chaine = list;
    int count = 0;

    while (chaine != NULL){
        count++;
        chaine = chaine->next;
    }
    return count;
}

static int my_put_in_list_llfsta(
    llfsta **list,
    int nb)
{
    llfsta *chaine = malloc(sizeof(llfsta));

    chaine->id = nb;
    chaine->next = *list;
    *list = chaine;
    return 0;
}

static void my_rev_list_llfsta(llfsta **begin)
{
    llfsta *jsp = NULL;
    llfsta *mdr = NULL;
    llfsta *osef = *begin;

    while (osef != NULL) {
        mdr = osef->next;
        osef->next = jsp;
        jsp = osef;
        osef = mdr;
    }
    *begin = jsp;
}

static char **suite_condition_str_to_array(
    char *str,
    llfsta *list)
{
    int len;
    char **dest = NULL;
    int tmp = 0;

    len = len_linked_list_tmp_llfsta(list);
    dest = malloc(sizeof(char *) * (len + 1));
    tmp = 0;
    for (int i = 0; i < len; i++){
        dest[i] = malloc(sizeof(char) * list->id);
        for (int j = 0; j < list->id; j++){
            dest[i][j] = str[tmp];
            tmp++;
        }
        tmp++;
        dest[i][list->id] = '\0';
        list = list->next;
    }
    dest[len + 1] = NULL;
    return dest;
}

// static char **condition_str_to_array(
//     char *str,
//     llfsta *list)
// {

// }

char **str_to_array(
    char *str
    ,char *sep
    )
{
    llfsta *list = NULL;
    int tmp = 0;
    bool correspondance;

    for (int i = 0; str[i] != '\0'; i++){
        for (char *j = sep; *j != 0; j++){
            if (str[i] != *j){
                correspondance = false;
            } else {
                correspondance = true;
                break;
            }
        }
        if (correspondance){
            my_put_in_list_llfsta(&list, tmp);
            tmp = 0;
        } else {
            tmp++;
        }
    }
    my_put_in_list_llfsta(&list, tmp);
    my_rev_list_llfsta(&list);
    return suite_condition_str_to_array(str, list);
}

char ***traitement_fichier(
    int compar,
    FILE *fd)
{
    char ***fichier;
    char *str;
    size_t len = 0;

    fichier = malloc(sizeof(char **) * compar);
    for (int i = 0; i <= compar + 1; i++){
        getline(&str, &len, fd);
        fichier[i] = str_to_array(str, " ");
    }
    fichier[compar + 1] = NULL;
    return fichier;
}