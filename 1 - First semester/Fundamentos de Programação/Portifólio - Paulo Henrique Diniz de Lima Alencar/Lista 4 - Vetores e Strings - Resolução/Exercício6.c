#include <stdio.h>
#define TAM 10

int main(){
	// Dicionário de dados:
	int vetor[TAM],vetorNovo[TAM];
	int i,n;
	
	// Entrada de dados:
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	
	// Processamento:
	n = 0;
	for(i = TAM - 1; i >= 0; i--){
		vetorNovo[n] = vetor[i];
		n++;
	}
	
	// Saída de dados:
	printf("Vetor raiz: ");
	for(i = 0; i < TAM; i++){
		printf("[%d]",vetor[i]);
	}
	
	printf("\n");
	
	printf("Vetor inverso: ");
	for(i = 0; i < TAM; i++){
		printf("[%d]",vetorNovo[i]);
	}
	
return 0;
}
