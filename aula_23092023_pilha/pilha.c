#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct Pilha* pilha(){
    struct Pilha* ptr_pilha = (struct Pilha*) malloc(sizeof(struct Pilha));
    ptr_pilha->topo = NULL;
    ptr_pilha->qtd_obj = 0;

    return ptr_pilha;
}

void empilhar(struct Objeto* obj, struct Pilha* pilha){
    printf("empilhando \"%c\" na pilha...\n", obj->valor);
    obj->proximo_objeto = pilha->topo; //1º objeto não aponta para nada
    pilha->topo = obj; //topo da pilha aponta para objeto recém adicionado
    pilha->qtd_obj++;
}

struct Objeto* desempilhar(struct Pilha* pilha){
    struct Objeto* ptr_obj;

    if(pilha->qtd_obj == 0){
        ptr_obj = NULL;
    } else {
        ptr_obj = pilha->topo;

        pilha->topo = ptr_obj->proximo_objeto; //topo da pilha atualizado
        pilha->qtd_obj--;
    }

    return ptr_obj;
}