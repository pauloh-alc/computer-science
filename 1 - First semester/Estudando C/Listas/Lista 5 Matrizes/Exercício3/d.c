// Exercício 3, item d) a soma dos elementos que estão na diagonal secundária.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 10 
int main(){
	// Dicionário de dados:
	int matriz[TAM][TAM];
	int i, j, somaS;

	// Entrada de dados - gerando matriz:
	somaS = 0;
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			matriz[i][j] = rand() % MAX;
			if(i + j == TAM - 1) somaS = somaS + matriz[i][j];
		}
	}
	
	// Saída de dados:
	printf("Matriz[%d][%d]:\n\n",TAM,TAM);
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
	printf("\nA soma dos elementos que estao na diagonal secundaria: %d. \n",somaS);
return 0;
}
