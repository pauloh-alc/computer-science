#include <stdio.h>
#define TAM 10
#define MAX 15

int main(){
	// Dicionário de dados:
	int A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];
	int i,j;
	// Entrada de dados:
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			A[i][j] = rand() % MAX;
		}
	}
	
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			B[i][j] = rand() % MAX;
		}
	}
	
	// Processamento:
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	// Saída de dados:
	
	printf("\nMatriz A[%d][%d]: \n\n",TAM,TAM);
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf("\t%d",A[i][j]);
		}
		printf("\t|\n");
	}
	
	printf("\nMatriz B[%d][%d]: \n\n",TAM,TAM);
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf("\t%d",A[i][j]);
		}
		printf("\t|\n");
	}
	
	printf("\nMatriz C[%d][%d]: \n\n",TAM,TAM);
	
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf("\t%d",C[i][j]);
		}
		printf("\t|\n");
	}
	
return 0;
}
