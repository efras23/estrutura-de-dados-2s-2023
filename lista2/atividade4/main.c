/*
    ENTRADA: números inteiros passados como argumento da função main()
    PROCESSAMENTO: ordenar número do menor pro maior com uma função bubble_sort
    SAÍDA: mostrar números ordenados
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void bubble_sort(int nums[], int qtd_nums);

int main(int argc, char * argv[]){
    int qtd_nums = argc - 1; //quantidade de números passados como argumento
    int nums[qtd_nums]; //vetor de inteiros convertidos do vetor de strings argv[][]
    int i = 0;

    //coverter string >>> int
    for(i = 0; i < qtd_nums; i++){
        nums[i] = atoi(argv[i+1]);
    }

    //BUBBLE SORT
    

    /*
    for(i = 1; i <= argc; i++){
        printf("%s\n", argv[i]);
    }
    */

    for(i = 0; i < qtd_nums; i++){
        printf("%d\n", nums[i]);
    }

    getch();

    

    return 0;
}

void bubble_sort(int nums[], int qtd_nums){
    int aux = 0;
    int i = 0, j = 0;

    for(j = 0; j < qtd_nums - 1; j++){
        if(nums[j] > nums[j+1]){
            aux = nums[j+1];
            nums[j+1] = nums[j];
            nums[j] = aux;
        }
    }
}