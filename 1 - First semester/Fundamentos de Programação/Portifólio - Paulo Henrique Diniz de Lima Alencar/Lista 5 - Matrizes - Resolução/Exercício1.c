#include <stdio.h>
#define TAM 4
int main(){
	// Dicionário de dados:
	int matriz[TAM][TAM];
	int i,j;
	
	// Entrada de dados:
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("Digite o numero da linha %d e coluna %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
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
