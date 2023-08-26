/*
    ENTRADA: número de 1 a 10 digitado pelo usuário
    PROCESSAMENTO: contar quantas vezes número digitado por usuário aparece no array
    SAÍDA: mostrar esta quantidade
*/
#include <stdio.h>

int qtd_nums_array(int nums[], int num_user){
    int qtd = 0;
    int i = 0;

    for(i = 0; i < 20; i++){
        if (nums[i] == num_user) {
            qtd++;
        }
    }

    return qtd;
};

int main(){
    int nums[20] = {1,2,2,3,4,4,4,6,7,7,7,7,7,8,8,8,9,10,10,10};
    int num_user = 0;

    //ENTRADA
    do{
        system("cls");
        printf("QUANTIDADE DE OCORRENCIAS NO ARRAY\n\n");

        printf("Digite um numero (inteiro) de 1 a 10: ");
        scanf("%d", &num_user);
    } while(num_user < 1 || num_user > 10);

    //CONTAGEM E SAÍDA
    printf("\n\n\t%d", qtd_nums_array(nums, num_user));
    //printf("\n\n\tNumero \"%d\" aparece %dx no array.", num_user, qtd_nums_array(nums, num_user));

    return 0;
}