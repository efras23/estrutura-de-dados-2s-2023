#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]){
    No* n0 = no('A',NULL);
    No* n1 = no('I',NULL);
    No* n2 = no('U',NULL);

    //encadeando...
    lista_inserir_no(n0,n1);
    lista_inserir_no(n0,n2);

    lista_imprimir(n0);

    //
    printf("\nCaractere está na lista? %d", lista_verificar_existencia(n0, 'I'));
    printf("\nNumero de ocorrencias: %d", lista_verificar_ocorrencias(n0,'I'));
    lista_imprimir_inversa(n0);



    //liberar lista
    lista_liberar(n0);

    return 0;
}