/*
    ENTRADA: [N/A]
    PROCESSAMENTO: multiplicar elementos de 2 arrays que estão na mesma posição
    SAÍDA: mostrar array com resultado na respectiva posição
*/
#include <stdio.h>
#define TAM 3

void multiplicar_arrays(int nums_1[], int nums_2[]) {
    int nums_multiplicados[TAM] = {0,0,0};
    int i = 0;

    //ARRAYS
    printf("MULTIPLICACAO DE 2 ARRAYS\n\n");
    printf("1o array: [");
    for(i = 0; i < TAM; i++){
        if (i == TAM - 1){
            printf(" %2d ", nums_1[i]);
        } else {
            printf(" %2d,", nums_1[i]);
        }
    }
    printf("]\n");

    printf("2o array: [");
    for(i = 0; i < TAM; i++){
        if (i == TAM - 1){
            printf(" %d ", nums_2[i]);
        } else {
            printf(" %d,", nums_2[i]);
        }
    }
    printf("]\n");

    //CÁLCULO
    for(i = 0; i < TAM; i++){
        nums_multiplicados[i] = nums_1[i] * nums_2[i];
    }

    //SAÍDA
    printf("\n[");
    for(i = 0; i < TAM; i++){
        if (i == 0) {
            printf("%d,", nums_multiplicados[i]);
        } else if (i == TAM - 1){
            printf(" %d", nums_multiplicados[i]);
        } else {
            printf(" %d,", nums_multiplicados[i]);
        }
    }
    printf("]");

};

int main(){
    int nums_1[TAM] = {5,7,9}, nums_2[TAM] = {11,13,17};

    multiplicar_arrays(nums_1, nums_2);

    return 0;
}