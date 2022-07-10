#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char* nome[2];
	char meuNome[30];
	int i,j;
	int tam;
	char letra;
	
	for (i = 0; i < 2; i++) {
		fflush(stdin);
		printf("Entre com um nome: ");
		scanf("%[^\n]s",meuNome);
		
		tam = strlen(meuNome) + 1;

		nome[i] = (char*) malloc (tam * sizeof(char));
		strcpy (nome[i], meuNome);
	}
	fflush(stdin);
	printf("Entre com a letra: ");
	scanf("%c",&letra);
	
	int pos;
	for (i = 0; i < 2; i++) {
		printf("|");
		for (j = 0; nome[i][j] != '\0'; j++) {
			printf("%c",nome[i][j]);
			if (nome[i][j] == letra) {
				pos = j;
				printf("coluna %d linha %d. \n",i,pos);
			}
		}
		printf("|\n");
	}
	
	return 0;
}
