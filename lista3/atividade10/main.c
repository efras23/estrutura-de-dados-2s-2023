#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main(int argc, char* argv[]){
    int opcao = 0;

    hash_table_put("DF", "Brasília");
    hash_table_put("SP", "São Paulo");
    hash_table_put("AC", "[Unknown]");


    do{
        printf("TABELA HASH\n\n");
        printf("");
    } while(opcao != 5);

    return 0;
}