/*
typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* criar_no(char valor, No* proximo_no);

void lista_inserir_no(No* H, No* no);
void lista_imprimir(No* H);
No* lista_copiar(No* H);
void lista_concatenar(No* H, No* Hc);
void lista_liberar(No* H);
int lista_quantidade_nos(No* H);
*/

//Atividade 9
typedef struct No {
    float valor;
    struct No *proximo_no;
} No;

void lista_inserir_no_ordenado(No *H, No *no);
void inserir_valor_lista_ordenada(No *lista_ordenada, float valor);
void inserir_valor_lista_nao_ordenada(No *lista_nao_ordenada, float valor);