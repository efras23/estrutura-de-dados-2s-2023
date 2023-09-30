struct Objeto {
    char valor;
    struct Objeto* proximo_objeto;
};

struct Pilha {
    int qtd_obj;
    struct Objeto* topo;
};

struct Pilha* pilha();
void empilhar(struct Objeto* obj, struct Pilha* pilha);
struct Objeto* desempilhar(struct Pilha* pilha);