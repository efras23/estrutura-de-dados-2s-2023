//Copiado do repositório do GitHub do professor, fiz algumas alterações

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int argc, char* argv[]){

    Objeto obj1;
    obj1.valor = 'A';
    Objeto obj2;
    obj2.valor = 'B';
    Objeto obj3;
    obj3.valor = 'C';

    Fila* F = fila();
    enfileirar(&obj1, F);
    enfileirar(&obj2, F);
    enfileirar(&obj3, F);

    Objeto* obj = NULL;
    do{
        obj = desenfileirar(F);
        if(obj != NULL){
            printf("%c\n", obj->valor);
        }
    }while(obj != NULL);

    exit(0);
}