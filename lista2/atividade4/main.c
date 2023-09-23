/*
    ENTRADA: números inteiros passados como argumento da função main()
    PROCESSAMENTO: ordenar número do menor pro maior com uma função bubble_sort
    SAÍDA: mostrar números ordenados
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "bubble_sort.h"

void imprimir_lista(int nums[], int qtd_nums);

int main(int argc, char * argv[]){
    int qtd_nums = argc - 1; //quantidade de números passados como argumento
    int nums[qtd_nums]; //vetor de inteiros convertidos do vetor de strings argv[][]
    int i = 0;

    //coverter string >>> int
    for(i = 0; i < qtd_nums; i++){
        nums[i] = atoi(argv[i+1]);
    }

    imprimir_lista(nums, qtd_nums);
    printf("\n");

    //BUBBLE SORT
    bubble_sort(nums, qtd_nums);

    imprimir_lista(nums, qtd_nums);
    getch();

    /*
    for(i = 1; i <= argc; i++){
        printf("%s\n", argv[i]);
    }
    */

    return 0;
}

void imprimir_lista(int nums[], int qtd_nums){
    int i = 0;

    for(i = 0; i < qtd_nums; i++){
        printf("%d ", nums[i]);
    }
}