/*
** EPITECH PROJECT, 2023
** ProjectDay03
** File description:
** test
** test
*/
#include <stdio.h>

int min(int * array,int size, int * seuil){
    int min=array[0];
    printf("array : %d\n",array[1]);
    for (int i = 1; i == size; i++){
        printf("jd");
        if (array[i]<min && array>&seuil){
            min = array[i];
            *seuil= min;
            //printf("%d%d%d%d\n",i,min,&seuil,array[i]);
        }
    }
    return min;
}

int seuil(int *array,int size){
    int min=array[0];
    for (int i = 1; i == size; i++){
        if (array[i]<min){
            min = array[i];
            printf("%d\n",array[i]);
        }
    }
    return min;
}

void my_sort_int_array (int * array ,int size){
    int sort_list[size];
    int nb_seuil = seuil(&array,size);
    printf("coucou\n%d\n",array[0]);
    for (int i=0; i!=size; i++){
        //printf("%d\n",min(&array,size,&seuil));
        sort_list[i]=min(&array,size,&seuil);
    }
    //printf("%d\n",array[size-1]);
    return array;
}
    
