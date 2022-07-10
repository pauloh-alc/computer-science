#include <stdio.h>
#define TAM 10

int main(){
	// Dicionário de dados:
	int vetor[TAM];
	int i;
	
	// Entrada de dados:
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	
	// Saída de dados:
	printf("\nVetor: ");
	for(i = 0; i < TAM; i++){
		printf("[%d]",vetor[i]);	
	}

return 0;
}
