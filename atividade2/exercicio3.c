/*
    ENTRADA: palavra digitada pelo usuário
    PROCESSAMENTO: buscar palavra no array de strings através de uma função
    SAÍDA: mostrar 1 ou 0 para existência ou não da palavra no array
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    char word_user[51] = {'\0'};
    char words[3][30] = {
                           "estrutura",
                           "dado",
                           "vetor"
                                  };

    printf("Tamanho: %s %d", words[1], strlen(words[1]));

    /*
    do{
        system("cls");
        printf("ADIVINHE UMA DAS PALAVRAS\n\n");
        printf("\tE _ _ _ _ T _ _ _\n");
        printf("\tD _ _ _\n");
        printf("\tV _ _ _ R\n\n");
        printf("\t\tTente: ");
        scanf("%[^\n]s", &word_user);
        fflush(stdin);

        if (strlen(word_user) > 50) {
            system("cls");
            printf("ADIVINHE UMA DAS PALAVRAS\n\n");
            printf("    ERRO! Palavra muito grande.");
            strcpy(word_user, "\0"); //zerar string
            getch();
        }
    } while (word_user[0] == '\0');
    */

    strlwr(word_user); //deixar palavra minúscula

    return 0;
}