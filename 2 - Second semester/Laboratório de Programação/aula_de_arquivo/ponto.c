#include <stdio.h>
#include <stdlib.h>
#define NULO NULL

typedef float real; 

typedef struct ponto {
    real x,y;
}Ponto;

int main (void) {
    Ponto p[3];
    FILE *f;
    char s[81];

    f = fopen("ponto.txt","r");

    if (f == NULO) {
        printf("erro ao abrir o arquivo!!\n");
        exit(1);
    }
    
    for (int i = 0; i < 3; i++)
        fscanf(f,"%s %f %f",s,&p[i].x,&p[i].y);

    fclose(f);

    for (int i = 0; i < 3; i++)
        printf("ponto %d: (%f %f)\n",i, p[i].x, p[i].y);
    
     
    return 0;
}
