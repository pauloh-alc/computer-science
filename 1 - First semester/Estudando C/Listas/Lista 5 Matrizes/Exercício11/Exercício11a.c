#include <stdio.h>
#define SIZE 4
int main(){
	// Dicionário de dados:
	int mat[SIZE][SIZE];
	int i,j;
	int x,a;
	
	// Entrada de dados: Gerando matriz.
	srand(time(NULL));
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			mat[i][j] = rand() % 10;
		}
	}
	// Imprimindo matriz gerada: 
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf("   |\n");
	}
	
	// Processamento: trecho que recebe um numero 'x' e um número de linha 'a',
	// multiplicando x por cada elemento mat[a][0..SIZE-1] da linha 'a'.
	
	do{
		printf("Entre com um numero 'x' e uma 'linha' respectivamente: ");
		scanf("%d%d",&x,&a);	
	}while (a > SIZE - 1 || a < 0);
	
	
	for (j = 0; j < SIZE; j++) {
		mat[a][j] = mat[a][j] * x;
	}
	
	// Saída de dados: exibindo matriz resultante
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf("   |\n");
	}
return 0;
}
