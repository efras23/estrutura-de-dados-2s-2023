#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]){
    No* n0 = no(2.0,NULL);
    No* n1 = no(3.23,NULL);
    No* n2 = no(0.5,NULL);

    //encadeando...
    lista_inserir_no(n0,n1);
    lista_inserir_no(n0,n2);

    //copiar lista
    No* N_copia = lista_copiar(n0);

    lista_imprimir(n0);
    printf("\n");

    //juntar listas "n0" e "N_copia"
    lista_concatenar(n0, N_copia);

    lista_imprimir(n0);
    printf("\n");

    //quantidade de elementos na lista
    printf("\nQuantidade de elementos na lista: %d", lista_quantidade_nos(n0));

    //liberar lista
    lista_liberar(n0);

    return 0;
}