#include <stdio.h>
#include <stdlib.h>

#define NOME_DO_ARQUIVO "meu_arquivo.txt"
#define TAM 300

int main (void) {
    char texto[TAM];
    FILE* arquivo;
    
    printf("Entre com um texto: ");
    scanf("%300[^\n]",texto);
    
    arquivo = fopen(NOME_DO_ARQUIVO, "at");
    
    if (arquivo == NULL) {
        printf("Erro: ocorreu algum problema ao tentar abrir o arquivo!!\n");
        exit(1);
    }
    
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] >= 97 && texto[i] <= 122) {
            texto[i] = texto[i] - 32;
        }  
        putc(texto[i], arquivo);
        i += 1;
    } 
    
    /* OU sem usar putc(), bastava utilizar fprintf()
    fprintf(arquivo,"%s",texto);
    */
    
    fclose(arquivo);
    
    return 0;
}
