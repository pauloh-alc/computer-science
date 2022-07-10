#include <stdio.h>

int main()
{
	// Dicionário de dados:
	int m[10][20], vetor[10];
	int i, j;
	
	// Gerando matriz no número pseudoaleatórios com função rand().
	// O número gerando então no intervalo [0-10[
	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		vetor[i] = rand() % 1; 				// Obs: colocando '0' na posições [0..9] do vetor para evitar lixo de memória durante as operações.
		for (j = 0; j < 20; j++) {
			m[i][j] = rand() % 10;
		}
	}
	
	// Exibindo matriz gerada:
	for (i = 0; i < 10; i++) {
		printf("|");				
		for (j = 0; j < 20; j++) {
			printf("%4d",m[i][j]);
		}
		printf("  |\n");
	}
	
	// Processamento:
	// Realizando a soma dos elementos de cada linha da matriz m[0..9][0..19]
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 20; j++) {
			vetor[i] += m[i][j]; 		// Cada resultado da soma dos elementos de cada linha fica armazenado no vetor[0..9].
		}
	}
	
	// Exibindo Matriz resultante. Matriz resultante é obtida a partir da multiplicação de cada elemento da matriz
	// pela 'soma' dos elementos de cada linha da matriz.
	
	printf("\n\n");
	
	for (i = 0; i < 10; i++) {
		printf("|");				
		for (j = 0; j < 20; j++) {
			m[i][j] = m[i][j] * vetor[i];
			printf("%4d",m[i][j]);
		}
		printf("  |\n");
	}
return 0;
}
