#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

#define TAM_MAX_CHARS 20

int main(int argc, char * argv[]){
    FILE * fptr = NULL;
    FILE * fptr2 = NULL;
    char palavra[TAM_MAX_CHARS]; //guardar palavra do arquivo provisoriamente
    char palavras[3][TAM_MAX_CHARS]; //guardar todas as palavras do arquivo
    int string_ordem_maior = 0; //indica se string é maior

    int i = 0, j = 0;
    //int cont_linhas_arquivo = 0;

    /*
    //quantidade de linhas no arquivo
    fptr = fopen(argv[1], "r");
    while(fgets(palavra, TAM_MAX_CHARS, fptr)){
        cont_linhas_arquivo++;
    }
    fclose(fptr);
    */

    //copiar palavars do arquivo para variável
    fptr = fopen(argv[1], "r");
    for(i = 0; i < 3; i++){
        fgets(palavra, TAM_MAX_CHARS, fptr);
        strcpy(palavras[i], palavra);
    }
    fclose(fptr);

    printf("%s", palavras[0]);
    printf("%s", palavras[1]);
    printf("%s\n", palavras[2]);

    //BUBBLE SORT
    bubble_sort(palavras,palavra,&string_ordem_maior);

    printf("%s", palavras[0]);
    printf("%s", palavras[1]);
    printf("%s", palavras[2]);

    //grava no arquivo
    fptr2 = fopen("arq_palavras_ordenado.txt", "wt");
    for(i = 0; i < 3; i++){
        fputs(palavras[i], fptr2);
    }
    fclose(fptr2);

    getch();

    return 0;
}