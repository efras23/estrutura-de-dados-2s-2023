#include <stdio.h>
#include <stdlib.h>

typedef struct P {
    int x;
    int y;
} P;

int main(int argc, char* argv[]){
    P ponto;

    ponto.x = 1;
    ponto.y = 2;

    printf("(%d, %d)\n", ponto.x, ponto.y);

    //vetores
    //...

    return 0;
}

/*
int main(int argc, char* argv[]){
    int a = 3;
    int b = 7;
    int * p = &a;

    printf("a = %d\n", a);
    printf("a = %d\n", *p);

    int* p1;

    p1 = malloc(sizeof(int));
    printf("p1 = %p\n");
    printf("*p1 = %d\n");

    return 0;
}
*/