#include <stdio.h>
#define TAM 10

int main(){
	// Dicionário de dados:
	int vetor[TAM];
	int i,x,existe,posicao;
	
	// Entrada de dados:
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	printf("\nEntre com um numero 'x' para verificar se esta no vetor: ");
	scanf("%d",&x);
	
	// Processamento:
	existe = 0;
	for(i = 0; i < TAM; i++){
		if(x == vetor[i]){
			existe = 1;
			posicao = i;
			break;
		}	
	}
	
	if(existe == 1) printf("\nO 'x', isto e, o %d esta no vetor na posicao %d. \n",x,posicao);
	else 			printf("\nO 'x', isto e, o %d nao esta no vetor !! \n");
return 0;
}
