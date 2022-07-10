#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// Dicionário de dados:
	const int SIZE = 4;
	int mat[SIZE][SIZE],v[SIZE*SIZE];
	int i, j, n, menor, posicaoMenor, l;
	
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
	
	// 	Entrada e Processamento: 
	// Trecho não permite usuário entrar com 'linha' for do intervalo [0..SIZE-1]
	while (1) {
		printf("Entre com o numero da 'l' da linha que voce deseja ordenar: ");
		scanf("%d",&l);
	
	if (l >= 0 && l <= SIZE - 1) break;
	}
	
	// Ordenação da mat[L][0..SIZE-1]:
	// Trecho realiza a ordenação de uma derterminada linha 'l' da mat[0..SIZE-1][0..SIZE-1] escolhida pelo usuário.
	for (i = 0; i < SIZE - 1; i++) {
		menor = mat[l][i];
		posicaoMenor = i;
		for (j = i; j < SIZE; j++) {
			if (mat[l][j] < menor) {
				menor = mat[l][j];
				posicaoMenor = j;
			}
		}
		mat[l][posicaoMenor] = mat[l][i];
		mat[l][i] = menor;
	}
	
	// Exibindo Matriz completa com linha mat[l][0..SIZE] ordenada:
	printf("\n\n Matriz mat[%d][0..SIZE-1] ordenada \n\n",l);
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%3d",mat[i][j]);
		}
		printf("  |\n");
	}
return 0;
}
