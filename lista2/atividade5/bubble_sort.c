#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"


void bubble_sort(char palavras[][TAM_MAX_CHARS], char palavra[], int * string_ordem_maior){
    int i = 0, j = 0;

    for(i = 0; i < 3-1; i++){
        for(j = 0; *string_ordem_maior != 1 || j < 3; j++){
            if(palavras[i][j] > palavras[i+1][j]){
                strcpy(palavra, palavras[i+1]);
                strcpy(palavras[i+1], palavras[i]);
                strcpy(palavras[i], palavra);
                *string_ordem_maior = 1;
            }
        }
    }
}