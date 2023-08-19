#include <stdio.h>

double calcular_dobro(double n){
    return n * 2;
}

int main(int argc, char* argv[]){

    printf("O dobro de %lf eh %lf\n", 20.3, calcular_dobro(10));

    return 0;
}