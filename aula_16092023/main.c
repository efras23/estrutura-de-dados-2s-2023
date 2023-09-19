#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void imprimir_arr(int *arr, int n){
    int i = 0;

    printf("\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]){
    int arr[] = {54,26,93,17,77,31,44,55,20};
    int n = sizeof(arr) / 4;

    imprimir_arr(arr, n);
    bubble_sort(arr, n); //bubble sort
    imprimir_arr(arr, n);

    return 0;
}