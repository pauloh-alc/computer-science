#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4
int main(){
	// Dicionário de dados:
	int mat[SIZE][SIZE];
	int i, j, x, k, a, b;
	
	// Gerando matriz com números pseudoaleatórios com função rand() 
	// os número gerando pertence ao intervalo [0-10[
	
	srand((time(NULL)));
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			mat[i][j] = rand() % 10;
		}
	}
	// Exibindo matriz gerada:
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf(" |\n");
	}
	
	// Processamento:
	// Trecho responsável por receber um número 'x', um número de linha 'a' e um número de linha 'b', os números das linhas devem está
	// no intervalo [0..SIZE-1]. Posteriormente, multiplicar os elementos da linha 'b' por 'x' e somar os resultados correspondentes com 
	// cada elemento da linha 'a' armazenando o resultado sobre a própria linha 'a'.
		
		// Entrada de dados:
		printf("Entre com um numero x: ");
		scanf("%d",&x);
		
		do {
			printf("Entre com um numero de linha 'a': ");
			scanf("%d",&a);
		} while (a < 0 || a >= SIZE);
		
		do {
			printf("Entre com um numero de linha 'b': ");
			scanf("%d",&b);
		} while (b < 0 || b >= SIZE);
	
	// Processamento:	
	for (k = 0; k < SIZE; k++) {
		mat[a][k] = mat[a][k] + (mat[b][k] * x);
	}

	// Saída de dados:
	// Exibindo matriz resultante.
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf(" |\n");
	}
return 0;
}
