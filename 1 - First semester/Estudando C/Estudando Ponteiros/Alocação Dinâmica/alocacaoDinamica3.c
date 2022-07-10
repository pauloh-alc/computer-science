#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

	void entradaDados (char **nomes, int n)
	{
		int i, tam;
		char entrada[SIZE];
		
		for (i = 0; i < n; i++) {
			printf("Nome %d: ",i);
			fflush(stdin);
			scanf("%[^\n]s",entrada);
			
			tam = strlen(entrada) + 1;
			nomes[i] = (char *) malloc (tam * sizeof(char));
			strcpy(nomes[i], entrada);
		}
	}
	
	void escreve (char **nomes, int n)
	{
		int i;
		for (i = 0; i < n; i++) {
			printf("%s\n",nomes[i]);
		}
	}
int main () {
	char **nomes; // ponteiro de ponteiro
	int i, n, size;
	
	printf("Quantidade de strings: ");
	scanf("%d",&n);

	nomes = malloc (n * sizeof(char*)); // Alocando memória para o vetor de ponteiros.
	
	//printf("Tamanho de cada string: ");
	//scanf("%d",&size);
	
	//for (i = 0; i < n; i++) {
	//	nomes[i] = malloc (size * sizeof(char));
	//}

	
	// Chamando funções:
	entradaDados (nomes, n);
	escreve (nomes, n);
	
	// Desalocando memória:
	for (i = 0; i < n; i++) {
		free(nomes[i]);     // Desalocando primeiro as strings alocadas.
	}
	
	free(nomes); // desalocando memória  do vetor de ponteiros.
	
	return 0;
}
