#include <stdio.h>

int main(){
	// Dicionário de dados:
	int A[2][3] = {{2 ,3 ,0},
				   {-1,-2,1}};  // 2 Linhas 3 colunas
				   
	int At[3][2]; 				// 3 Linhas 2 colunas
	int lin, col;
	int linha, coluna;
	
	// Exibindo Matriz 'A':
	printf("Matriz A: \n");
	for (lin = 0; lin < 2; lin++) {
		printf("|");
		for (col = 0; col < 3; col++) {
			printf("%3d",A[lin][col]);
		}
		printf(" |\n");
	}
	

	// Processamento:
	// Trecho responsável transformar matriz A em matriz transposta.
	// A transformação consiste em tracar ordenadamente as linhas por 
	// colunas ou as colunas por linhas

	for (lin = 0; lin < 2; lin++) {
		for (col = 0; col < 3; col++) {
			At[col][lin] = A[lin][col];
		}
	}
	
	// Exibindo Matriz 'At':
	printf("\nMatriz At: \n");
	for (lin = 0; lin < 3; lin++) {
		printf("|");
		for (col = 0; col < 2; col++) {
			printf("%3d",At[lin][col]);
		}
		printf(" |\n");
	}
return 0;
}
