#include <stdio.h>
#define TAM 10

int main(){
	// Dicionário de dados:
	int vetor[TAM],vetorSemX[TAM];
	int i,x,n;
	
	// Entrada de dados:
	printf("Entre com um numero 'x' por gentileza: ");
	scanf("%d",&x);
	
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	
	// Processamento:
	n = 0;
	for(i = 0; i < TAM; i++){
		if(x != vetor[i]){
			vetorSemX[n] = vetor[i];
			n++;
		}
	}
	
	// Saída de dados:
	printf("Vetor raiz: ");
	for(i = 0; i < TAM; i++){
		printf("[%d]",vetor[i]);
	}
	
	printf("\n");
	
	if(n == 0){
		printf("\nSeu vetor x, ficou sem nenhum posicao !! \n");	
	}
	else{
		printf("Vetor sem x: ");
		for(i = 0; i < n; i++){
			printf("[%d]",vetorSemX[i]);
		}
	}
return 0;
}
