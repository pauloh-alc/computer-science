#include <stdio.h>

int main (void) {
    FILE *arq_ex1;
    // tipo FILO identificador;
                                              
    arq_ex1 = fopen("somente_leitura.txt","r"); 
    
    // fopen retorna um endereço da região de memória principal que possui as informações necessárias para leitura e escrita no arquivo.
     

    // Realizando Leitura de um número no arquivo somente_escrita.txt 
    /*
    int numero;

    fscanf(arq_ex1,"%d",&numero);
    
    printf("número lido do arquivo: %d\n",numero);
    */
    
    char nome[20];

    fscanf(arq_ex1,"%[^\n]",nome);

    printf("O nome lido foi: %s\n",nome);
    
    return 0;
}
