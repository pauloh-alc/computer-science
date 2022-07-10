#include <stdio.h>
#define TAM 5 
int main(){
	// Dicionário de dados:
	int matriz[TAM][TAM];
	int i,j;
	
	// Dados de entrada:
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(i == j) matriz[i][j] = 1;
			else 	   matriz[i][j] = 0;
		}
	}
	
	// Saída de dados:
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
return 0;
}
