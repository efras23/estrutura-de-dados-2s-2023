#include <stdio.h>
#include "bubble_sort.h"

void bubble_sort(int nums[], int qtd_nums){
    int aux = 0;
    int i = 0, j = 0;

    for(i = 0; i < qtd_nums; i++){
        for(j = 0; j < qtd_nums - 1 - i; j++){
            if(nums[j] > nums[j+1]){
                swap(&nums[j], &nums[j+1]); //troca de posições
            }
        }
    }
}

    void swap(int * num1, int * num2){
        int aux = 0;

        aux = *num2;
        *num2 = *num1;
        *num1 = aux;
    }