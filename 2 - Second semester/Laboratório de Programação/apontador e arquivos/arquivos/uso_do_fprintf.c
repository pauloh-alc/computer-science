#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_DO_ARQUIVO "meu_texto_fprintf.txt"
#define TAM_STR 50

int main (void) {
    float real = 547.32;
    char carac = 'T';
    char str[TAM_STR];
    FILE* arq;

    strcpy(str,"teste para string");

    arq = fopen(NOME_DO_ARQUIVO,"w");
    
    if (arq == NULL) {
        printf("Erro na abertura de arquivo!\n");
        exit(1);
    }
    
    fprintf(arq,"%f\nstring constante\n%s\n%c\n",real,str,carac);
    fclose(arq);

    return 0;
}
