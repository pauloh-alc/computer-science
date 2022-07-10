#include <stdio.h>
#include <stdlib.h>
#define NOME_ARQUIVO "meu_texto.txt"
#define TAM_STR 50

int main (void) {
    // Dicionário de dados:
    int inteiro;
    float real;
    char str[TAM_STR];
    FILE* arq; // ponteiro do tipo FILE. arq vai deter um endereço na memória principal que vai conter informações que permitem a menipulação do arquivo.

    // Abertura do arquivo + verificando se arq == NULL.
    if (!(arq = fopen(NOME_ARQUIVO, "r"))) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    
    fscanf(arq,"%d\n%s\n%f",&inteiro, str, &real);
    fclose(arq);

    printf("%d\n%s\n%.2f",inteiro,str,real);
    return 0;
}
