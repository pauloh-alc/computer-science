#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

int main(){
	// Dicionário de dados:
	int mat[SIZE][SIZE];
	int i,j;
	int somaDiagPri = 0, somaTriInf = 0, somaTriSup = 0, somaDiagSeg = 0, somaTriSupSe = 0, somaTriInfSe = 0 ;
	
	// Gerando matriz com números psedoaleatótios no intervalo [0-10[ 
	srand(time(NULL));
	for ( i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			mat[i][j] = rand() % 10;
		}
	}
	
	// Saída de dados: imprimindo matriz.
	for(  i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf(" |\n");
	}

	// Processamento: 
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			if(i == j) 			  somaDiagPri  += mat[i][j]; // Realiza a soma dos elementos da diagonal principal. 
			if(i > j )            somaTriInf   += mat[i][j]; // Realiza a soma dos elementos abaixo da diagonal principal.
			if(j > i )            somaTriSup   += mat[i][j]; // Realiza a soma dos elementos acima da diagonal principal.
			if(i + j == SIZE - 1) somaDiagSeg  += mat[i][j]; // Realiza a soma dos elementos da diagonal secundaria.
			if(i + j  > SIZE - 1) somaTriInfSe += mat[i][j]; // Realiza a soma dos elementos acima da diagonal secundária.
			if(i + j  < SIZE - 1) somaTriSupSe += mat[i][j]; // Realiza soma dos elementos abaixo da diagonal secundária.	
		}
	}
	// Saída de dados:
	printf("\n");
	printf("A soma dos elementos da diagonal principal: %d. \n",somaDiagPri);
	printf("A soma dos elementos abaixo da diagonal principal: %d. \n",somaTriInf);
	printf("A soma dos elementos acima da diagonal principal: %d. \n",somaTriSup);
	printf("A soma dos elementos da diagonal secundaria: %d. \n",somaDiagSeg);
	printf("A soma dos elementos abaixo da diagonal secundaria: %d. \n",somaTriInfSe);
	printf("A soma dos elementos acima da diagonal secundaria: %d. \n",somaTriSupSe);
return 0;
}
