/*
    ENTRADA: função que recebe com array com (3) números inteiros
    PROCESSAMENTO: somar elementos (3) do array
    SAÍDA: mostrar soma
*/

#include <stdio.h>
#include <stdlib.h>

int somar_inteiros(int * nums);

int main(){
    int nums[3];
    int i = 0;
    
    for(i = 0; i < 3; i++){
        system("cls");
        printf("Digite 3 numeros inteiros:\n\n");
        printf("    %do: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("%d", somar_inteiros(nums));

    return 0;
}

int somar_inteiros(int * nums){
    int soma = 0;
    int i = 0;

    for (i = 0; i < 3; i++){
        soma += nums[i];
    }

    return soma;
}