#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]){
    No* n0 = no(2.0,NULL);
    No* n1 = no(3.23,NULL);
    No* n2 = no(0.5,NULL);

    No* N_copia = lista_copiar(n0); //copiar lista

    lista_inserir_no(n0,n1);
    lista_inserir_no(n0,n2);

    lista_imprimir(n0);
    printf("\n");

    lista_concatenar(n0, N_copia);

    printf("\n");
    lista_imprimir(n0);

    lista_liberar(n0); //liberar lista

    printf("\nQuantidade de elemntos na lista: %d", lista_quantidade_nos(n0));

    return 0;
}