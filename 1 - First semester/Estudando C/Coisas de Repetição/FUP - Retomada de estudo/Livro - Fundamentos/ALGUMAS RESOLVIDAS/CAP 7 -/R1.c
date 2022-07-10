#include <stdio.h>
#define TAM 2

int main()
{
	// Dicionário de dados:
	int m[TAM][TAM];
	int i, j;
	int maior;
	
	// Entrada de dados:
	
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			printf("m[%d][%d]:", i, j);
			scanf("%d", &m[i][j]);
		}
		printf("\n");
	}
	
	// Processamento: 
	// Trecho responsável por buscar o maior elemento da matriz.
	maior = m[0][0];
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			if (m[i][j] > maior)	{
				maior = m[i][j];
			}
		}
	}
		
	// Saída de dados:
	// Exibindo matriz m[0..TAM-1][0..TAM-1] com cada elemento de m[0..TAM-1][0..TAM-1] * maior
	for (i = 0; i < TAM; i++) {
		printf("|");
		for (j = 0; j < TAM; j++) {
			printf("%3d", m[i][j]*maior);
		}
		printf("  |\n");
	}
return 0;
}
