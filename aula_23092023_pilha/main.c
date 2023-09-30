/*
    Aula de 23/09/2023 sobre PILHAS, "LIFO", dando início às listas encadeadas.
    Fiz este código em casa, uma semana depois, copiando do professor (GitHub) e adaptando-o pro meu melhor entendimento.
    Agora, entendi esse programa; pq na aula não tava indo.
*/

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char* argv[]){
    //criando objetos (pra pilha)
    struct Objeto obj1;
    struct Objeto obj2;
    struct Objeto* ptr_obj;

    obj1.valor = 'A';
    obj2.valor = 'B';

    //criando a pilha
    struct Pilha* ptr_pilha = pilha();

    //adicionando objeto na pilha
    empilhar(&obj1, ptr_pilha);
    empilhar(&obj2, ptr_pilha);

    do{
        //desempilhar objeto do topo e retornar seu endereço para "ptr_obj"
        ptr_obj = desempilhar(ptr_pilha);
        if (ptr_obj != NULL) {
            printf("Objeto \"%c\" foi desempilhado.\n", ptr_obj->valor);
        }
    }while(ptr_obj != NULL);

    printf("\nQuantidade de objetos na pilha: %d\n\n", ptr_pilha->qtd_obj);

    free(ptr_pilha);
    return 0;
}