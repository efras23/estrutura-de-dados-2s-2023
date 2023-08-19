/*
    ENTRADA: função que recebe com array com (5) números inteiros
    PROCESSAMENTO: definir maior e menor elemento do array
    SAÍDA: mostrar os maior e menor números
*/

#include <stdio.h>
#include <stdlib.h>

void maior_menor_num(int * nums);

int main(){
    int nums[5];
    int i = 0;

    for(i = 0; i < 3; i++){
        system("cls");
        printf("MAIOR E MENOR NUMEROS\n\n")
        printf("Digite 5 numeros inteiros:\n\n");
        printf("    %do: ", i + 1);
        scanf("%d", &nums[i]);
    }


    return 0;
}

void maior_menor_num(int * nums){
    int maior_num = nums[0], menor_num = nums[0]; //variáveis recebem o 1º (0) elemento do vetor
    int i = 0;

    for(i = 1; i < 5; i++) {
        if (nums[i] > maior_num){
            maior_num = nums[i];
        }
        if (nums[i] < menor_num){
            menor_num = nums[i];
        }
    }
}