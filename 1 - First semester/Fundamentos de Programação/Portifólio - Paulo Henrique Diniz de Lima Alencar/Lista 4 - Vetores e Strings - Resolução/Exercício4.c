#include <stdio.h>
#define TAM 10

int main(){
	// Dicionário de dados:
	int vetor[TAM];
	int i,maior,menor;
	
	// Entrada de dados:
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	
	// Processamento de dados:
	for(i = 0; i < TAM; i++){
		if(i == 0){
			maior = vetor[i];
			menor = vetor[i];
		}
		if(vetor[i] > maior) maior = vetor[i];
		if(vetor[i] < menor) menor = vetor[i];
	}
	// Saída de dados :
	printf("O 'maior' elemento do vetor digitado e: %d. \n", maior);
	printf("O 'menor' elemento do vetor digitado e: %d. \n", menor);
return 0;
}
