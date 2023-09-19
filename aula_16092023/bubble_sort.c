#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2){
    int aux = 0;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void bubble_sort(int *arr, int n){
    int i = 0, j = 0;

    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}