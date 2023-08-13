/*
    NÚMERO PRIMO

    ENTRADA: número (string) enviado pela linha de comando como argumento do programa
    PROCESSAMENTO: verificar se número é primo ou não
    SAÍDA: mostrar 1 para indicar que número é "primo" ou 0 para "não primo"
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int * ptr_num); //função que verifica se número é primo

int main(int argc, char* argv[]){
    int num = atoi(argv[1]); //número (string) atribuída à variável "num" (int)
    int i = 0;
    
    printf("%d", is_prime(&num));
    getch();

    return 0;
}

is_prime(int* ptr_num) {
    int num_divided_by_2 = *ptr_num / 2; //usar metade do número no "loop for", ao invés do número total (economizar processamento)
    int prime = 1;
    int i = 0;

    if (*ptr_num < 2) {
        prime = 0;
    } else if (*ptr_num == 2 || *ptr_num == 3 || *ptr_num == 5 || *ptr_num == 7) {
        prime = 1;
    } else {
        for (i = 2; (i <= num_divided_by_2) && (prime); i++){
            if (*ptr_num % i == 0){ //se falso, número continua "primo"; senão, número vira "não primo" e loop se encerrará
                prime = 0;
            }
        }
    }

    return prime;
}