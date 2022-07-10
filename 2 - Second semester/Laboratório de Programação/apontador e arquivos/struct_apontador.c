#include <stdio.h>

typedef struct {
    char nome[30];
    int matricula;
} tAluno;

int main (void) {
    tAluno *x;
    tAluno y;
    
    x = &y; // x ----> y, i.e x aponta para y

    x -> matricula = 2031;

    printf("%d\n",y.matricula);
    
    (*x).matricula = 2021;

    printf("%d\n",y.matricula);

    return 0;
}
