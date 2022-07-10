// Exercício 3, item b) soma dos elementos que estão acima da diagonal principal.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 10 
int main(){
	// Dicionário de dados:
	int matriz[TAM][TAM];
	int i,j;
	int somaAcima; // soma dos elementos que estão acima da diagonal principal
	
	// Entrada de dados - gerando matriz:
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			matriz[i][j] = rand() % MAX;
		}
	}
	
	// Saída de dados - exibindo matriz gerada:
	printf("\n");
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
	
	// Processamento: soma dos elementos que estão acima da diagonal principal.
	somaAcima = 0;
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(i == j && i != TAM - 1){
				somaAcima += matriz[i][j+1]; 
			}
		}
	}
	printf("\nA soma dos elementos que estao 'acima' da diagonal principal: %d. \n",somaAcima);
return 0;
}
