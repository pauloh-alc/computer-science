#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4
int main(){
	// Dicionário de dados:
	int mat[SIZE][SIZE], aux[SIZE];
	int i,j;
	int a,b;
	
	// Entrada de dados: 
	// Gerando matriz com números pseudoaleatórios no intervalo [0-10[.
	srand(time(NULL));
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
		printf("   |\n");
	}
	
	// Processamento: 
	// Trecho que recebe um número correspondente a linha 'a' e um número de linha 'b',
	// realizando a 'soma' dos elementos correspondente a linha 'a' com a linha 'b' e armazenando o resultado sobre 
	// a linha 'a'. Para realizar essa 'soma' armazenei os valores da linha 'b' em um vetor auxiliar, identificado como 
	// aux[0..SIZE-1], depois somei cada elemento de aux[0..SIZE-1] com o elemento da mat[a][SIZE-1], armazenando no próprio mat[a][SIZE-1].
	
	printf("Entre com a linha 'a' e com a linha 'b' respectivamente: ");
	scanf("%d%d",&a,&b);
	/*
	
	Observações:
	
	Tenho dois casos: se a > b ou se b > a
	Ex:
	
	b | 1 2 3 |            
	a | 3 4 5 |        Se a > b percorro a matriz mat[b..a][SIZE-1], ou seja, de cima para baixo.
	  | 6 7 8 |
	  
	  ou
	  
	a | 1 2 3 |         
	b | 3 4 5 |       Se b > a percorro a matriz mat[b..a][SIZE-1], ou seja, de baixo para cima.
	  | 6 7 8 |
	
	*/
	
	if (a > b) { // Se a > b
		for (i = b; i <= a; i++) {  							// Percorrendo mat[b..a][SIZE-1], de cima para baixo.
			for (j = 0; j < SIZE; j++) {
				if (i == b) aux[j] = mat[i][j]; 				// Colocando os elementos da linha 'b' no vetor aux[0..SIZE-1].
				if (i == a) mat[i][j] = mat[i][j] + aux[j];		// realizando uma 'soma' dos elementos correspondentes a linha 'a' com a linha 'b' 
																// e armazenando o resultado sobre  a linha 'a'  
			}
		}
	}
	else { 		// Se b > a
		for (i = b; i >= a; i--) {								// Percorrendo mat[b..a][SIZE-1], de baixo para cima.
			for (j = 0; j < SIZE; j++) {
				if (i == b) aux[j] = mat[i][j];
				if (i == a) mat[i][j] = mat[i][j] + aux[j];
			}
		}
	}
	
	// Saída de dados: exibindo matriz resultante
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf("   |\n");
	}
return 0;
}
