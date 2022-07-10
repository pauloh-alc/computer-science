#include <stdio.h>
#include <stdlib.h>
#define NOME_DO_ARQUIVO "meu_texto_fgets.txt"


int main (void) {
    char str1 [50];
    char str2 [40];
    FILE* arquivo;

    if (!(arquivo = fopen(NOME_DO_ARQUIVO, "r"))) {
        printf("Erro na abertura de arquivo!\n");
        exit(1);
    }
    
    fgets(str1, 50, arquivo);
    fgets(str2, 40, arquivo); 
    fclose(arquivo);

    printf("str1: %s",str1);
    printf("str2: %s",str2);
    return 0;
}
