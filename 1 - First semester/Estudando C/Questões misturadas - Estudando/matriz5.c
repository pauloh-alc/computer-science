#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main ()
{
	int m[TAM][TAM];
	int i, j, x, linha, coluna, sinalizador;
	
	// Gerando valores para a matriz: 
	srand(time(NULL));
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			m[i][j] = rand() % 10;
		}
	}
	
	// Entrada de dados:
	printf("Entre com um valor 'x': ");
	scanf("%d",&x);
	
	sinalizador = -1;
	
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			if (x == m[i][j]) {
				linha = i;
				coluna = j;
				sinalizador = 1;
				break;
			}
		}
		if (sinalizador == 1) break;
	}
	
	// Exibindo matriz: 
	for (i = 0; i < TAM; i++) {
		printf("|");
		for (j = 0; j < TAM; j++) {
			printf("\t%d",m[i][j]);
		}
		printf("|\n");
	}
	
	printf("Elemento igual a 'x'[%d] localiza-se na linha %d e coluna %d. \n", x, linha, coluna);
	return 0;
}
