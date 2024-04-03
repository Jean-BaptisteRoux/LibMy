/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** Donne la longueur du str dans la limite du unsigned int
*/

int strl(char const *str)
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
