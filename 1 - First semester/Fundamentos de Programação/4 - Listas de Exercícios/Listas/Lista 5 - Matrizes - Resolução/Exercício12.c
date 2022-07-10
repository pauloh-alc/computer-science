#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

int main(){
	// Dicionário de dados:
	int mat[SIZE][SIZE], a[SIZE], b[SIZE];
	int i, j;
	
	// Gerando matriz com números pseudoaleatórios com função rand() no intervalo [0-10[
	srand(time(NULL));
	for (i = 0; i < SIZE; i++) {
		// Gerando vetor com números pseudoaleatórios com função rand() no intervalo [0-10[
		a[i] = rand() % 10;
		b[i] = 0;
		for (j = 0; j < SIZE; j++) {
			mat[i][j] = rand() % 10;
		}
	}
	
	// Exibindo matriz mat[0..SIZE-1][0..SIZE-1]
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf(" |\n");
	}
	
	// Exibindo vetor a[0..SIZE-1]
	printf("\nVetor a: ");
	for (i = 0; i < SIZE; i++) {
		printf("[%d]",a[i]);
	}
	
	
	// Processamento:
	/*
	for (j = 0; j < SIZE; j++) {
		for (i = 0; i < SIZE; i++) {
			b[i] = b[i] + (mat[i][j] * a[j]);
		}
	}
	*/
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			b[i] = b[i] + (mat[i][j] * a[j]);
		}
	}
	
	// Exibindo vetor b[0..SIZE-1]
	printf("\nVetor b: ");
	for (i = 0; i < SIZE; i++) {
		printf("[%d]",b[i]);
	}
return 0;
}
