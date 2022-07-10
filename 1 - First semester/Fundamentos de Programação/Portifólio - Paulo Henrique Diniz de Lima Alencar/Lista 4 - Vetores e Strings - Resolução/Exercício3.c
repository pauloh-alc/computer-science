#include <stdio.h>
#define TAM 10

int main(){
	// Dicionário de dados:
	int vetor[TAM];
	int i,soma;
	
	// Entrada de dados:
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	
	// Processamento de dados:
	soma = 0;
	for(i = 0; i < TAM; i++){
		soma = soma + vetor[i];
	}
	
	// Saída de dados:
	printf("A soma dos elementos do vetor e: %d. \n",soma);
	
return 0;
}
