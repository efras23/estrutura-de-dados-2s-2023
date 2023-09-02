/*
    REGRESSÃO LINEAR


*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Ponto{
    int x;
    float y;
} Ponto;

int main(int argc, char *argv[]){
    FILE *fptr = NULL;
    char dados[100]; //registrar linha do arquivo
    int cont_regs = 0;
    struct Ponto * ptr_pontos;


    fptr = fopen(argv[1],"r");

    //quantidade de registros
    while(fgets(dados, 100, fptr)){
        cont_regs++;
    }
    
    //alocação dinâmica
    ptr_pontos = malloc(sizeof(struct Ponto) * cont_regs);

    printf("sizeof Ponto: %d\n", sizeof(Ponto));

    fclose(fptr);
    free(ptr_pontos);
    
    /*FILE *fptr;
    char dados[100];

    fptr = fopen(argv[1],"r");

    fgets(dados,100,fptr);

    printf("%s sizeof%d", dados, sizeof(dados));
    */

    return 0;
}