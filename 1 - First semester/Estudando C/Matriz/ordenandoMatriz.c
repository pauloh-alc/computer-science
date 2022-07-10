#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// Dicionário de dados:
	const int SIZE = 4;
	int mat[SIZE][SIZE],v[SIZE*SIZE];
	int i, j, n, menor, posicaoMenor;
	
	// Entrada de dados:
	// Gerando matriz com números pseudoaleatórios no intervalo [0-10[
	srand(time(NULL));
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++){
			mat[i][j] = rand() % 10;	
		}
	}
	// Exibindo matriz gerada:
	printf(" Matriz gerada \n\n");
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%3d",mat[i][j]);
		}
		printf("  |\n");
	}
	
	// Transferindo elementos da matriz para um vetor v[0..(SIZE*SIZE)-1].
	n = 0;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			v[n] = mat[i][j];
			n++;
		}
	}
	
	// Exibindo 'vetor' gerado:
	printf("\n\n Gerado\n v: ");
	for (i = 0; i < n; i++) {
		printf("[%d]",v[i]);
	}
	
	// Ordenação do 'vetor':
	for (i = 0; i < n - 1; i++) {
		menor = v[i];
		posicaoMenor = i;
		for (j = i; j < n; j++) {
			if (v[j] < menor) {
				menor = v[j];
				posicaoMenor = j;
			}
		}
		v[posicaoMenor] = v[i];
		v[i] = menor;
	}
	
 	// Exibindo 'vetor' Ordenado:
	printf("\n\n Ordenado\n v: ");
	for (i = 0; i < n; i++) {
		printf("[%d]",v[i]);
	}
	
	// Transformando o 'vetor' em matriz:
	n = 0;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			mat[i][j] = v[n];
			n++;
		}
	}
	
	// Exibindo Matriz Ordenada:
	printf("\n\n Matriz ordenada \n\n");
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%3d",mat[i][j]);
		}
		printf("  |\n");
	}
return 0;
}
