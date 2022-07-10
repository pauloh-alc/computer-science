#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NOME_ARQUIVO "teste.txt"
int main () {
	
	FILE *ponteiro_arquivo;
	char* nome[5];
	char aux[30];
	int tam, i;
	ponteiro_arquivo = fopen(NOME_ARQUIVO, "r"); 
	
	i = 0;
	while (!feof(ponteiro_arquivo)) {
		fscanf(ponteiro_arquivo,"%s",aux);
		tam = strlen(aux);
		nome[i] = (char*) malloc(tam * sizeof(char));
		strcpy(nome[i],aux);
	i++;
	}
	
	printf("%s\n",nome[0]);
	printf("%s\n",nome[1]);
	printf("%s\n",nome[2]);
	printf("%s\n",nome[3]);
	printf("%s\n\n",nome[4]);
	
	for(i = 0; i < 5; i++) {
		printf("%s",nome[i]);
	}
	return 0;
}
