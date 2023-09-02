/*
    REGRESSÃO LINEAR

    ENTRADA: registros do arquivo "dados.csv" que contêm valores x e y de pontos
    PROCESSAMENTO: calcular medias de todos valores x e y; inclinação e intercepcao da reta de regressão
    SAÍDA: mostrar a devida equação da regressão linear (y = 0.8x + 7)
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#define MAX_TAM_REG_DADOS 15
#define TAM_AUX 10

typedef struct Ponto{
    int x;
    float y;
} Ponto;

void converter_string_para_numero(FILE * fptr, Ponto * ptr_pontos, char * reg_dados, int qtd_regs);
    void remover_lixo_aux(char * aux_x, char * aux_y);
void calcular_medias_x_y(Ponto * ptr_pontos, int qtd_regs, float * media_x, float * media_y);
void calcular_inclinacao(Ponto * ptr_pontos, int qtd_regs, float media_x, float media_y, float * inclinacao);
void calcular_intercepcao(float media_x, float media_y, float inclinacao, float * intercecao);

int main(int argc, char *argv[]){
    FILE *fptr = NULL;
    char reg_dados[MAX_TAM_REG_DADOS]; //guardar leitura do arquivo (linha)
    int qtd_regs = 0;
    Ponto * ptr_pontos; //apontar para array de pontos (x e y)

    float media_x = 0.0f, media_y = 0.0f;
    float inclinacao = 0.0f;
    float intercepcao = 0.0f;
    

    //quantidade de registros
    fptr = fopen(argv[1],"r");
    while(fgets(reg_dados, MAX_TAM_REG_DADOS, fptr)){
        qtd_regs++;
    }
    fclose(fptr);

    //alocação dinâmica
    ptr_pontos = malloc(sizeof(Ponto) * qtd_regs);

    //converter registros string de x e y para números
    fptr = fopen(argv[1],"r");
    converter_string_para_numero(fptr, ptr_pontos, reg_dados, qtd_regs);
    fclose(fptr);

    //calcular medias de x e y
    calcular_medias_x_y(ptr_pontos, qtd_regs, &media_x, &media_y);

    //calcular inclinação (coeficiente angular)
    calcular_inclinacao(ptr_pontos, qtd_regs, media_x, media_y, &inclinacao);

    //calcular intercepcao (coeficiente linear)
    calcular_intercepcao(media_x, media_y, inclinacao, &intercepcao);

    //SAÍDA
    printf("FORMULA DA REGRESSAO LINEAR (dados.csv)\n\n");
    printf("\ty = %.1fx + %.0f", inclinacao, intercepcao);
    getch();

    //desalocar vetor de structs (pontos)
    free(ptr_pontos);
    
    return 0;
}

void converter_string_para_numero(FILE * fptr, Ponto * ptr_pontos, char * reg_dados, int qtd_regs){
    int i = 0, j = 0, k = 0;
    char aux_x[TAM_AUX], aux_y[TAM_AUX];

    //atribuição dos valores x e y para cada ponto
    for(i = 0; i < qtd_regs; i++){
        fgets(reg_dados, MAX_TAM_REG_DADOS, fptr);

        //dividir registro nos valores x e y
        for(j = 0; reg_dados[j] != ','; j++){
            aux_x[j] = reg_dados[j];
        }
        for(k = 0, j++; j < strlen(reg_dados) - 1; k++,j++){
            aux_y[k] = reg_dados[j];
        }

        //conversão e atribuição dos valores x e y
        ptr_pontos[i].x = atoi(aux_x);
        ptr_pontos[i].y = atof(aux_y);

        //remover o lixo das strings auxiliares
        remover_lixo_aux(&aux_x[0], &aux_y[0]);
    }    
}

    void remover_lixo_aux(char * aux_x, char * aux_y) {
        int i = 0;

        for(i; i < TAM_AUX; i++){
            aux_x[i] = '\0';
            aux_y[i] = '\0';
        }    
    }

void calcular_medias_x_y(Ponto * ptr_pontos, int qtd_regs, float * media_x, float * media_y){
    int soma_x = 0;
    float soma_y = 0.0f;
    int i = 0;

    for(i; i < qtd_regs; i++){
        soma_x += ptr_pontos[i].x;
        soma_y += ptr_pontos[i].y;
    }

    *media_x = (float)soma_x / (float)qtd_regs;
    *media_y =        soma_y / (float)qtd_regs;
}

void calcular_inclinacao(Ponto * ptr_pontos, int qtd_regs, float media_x, float media_y, float * inclinacao) {
    float soma_numerador = 0.0f, soma_denominador = 0.0f;
    int i = 0;

    for(i; i < qtd_regs; i++){
        soma_numerador += (float)(ptr_pontos[i].x - media_x) * (ptr_pontos[i].y - media_y); //somatório numerador
        soma_denominador += pow((float)(ptr_pontos[i].x - media_x), 2);                     //somatório denominador
    }

    //inclinação
    *inclinacao = soma_numerador / soma_denominador;
}

void calcular_intercepcao(float media_x, float media_y, float inclinacao, float * intercepcao) {
    //intercepcao
    *intercepcao = media_y - (inclinacao * media_x);
}