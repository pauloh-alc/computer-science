#include <stdio.h>
#define TAM 10

int main(){
	// Dicionário de dados:
	int vetor[TAM],vetorP[TAM],vetorI[TAM];
	int i,p,im;
	
	// Entrada de dados:
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	
	// Processamento:
	p = 0;
	im = 0;
	for(i = 0; i < TAM; i++){
		if(vetor[i] % 2  == 0){
			vetorP[p] = vetor[i];
			p++;
		}
		else{
			vetorI[im] = vetor[i];
			im++;
		}
	}
	
	// Saída de dados:
	if(p > 0){
		printf("\n Vetor dos pares: ");
		for(i = 0; i < p; i++){
			printf("[%d]",vetorP[i]);
		}
	}
	else{
		printf("\n Nenhum numero 'par' no vetor raiz. \n");
	}
	
	if(im > 0){
		printf("\n Vetor dos impares: ");
		for(i = 0; i < im; i++){
			printf("[%d]",vetorI[i]);
		}	
	}
	else{
		printf("\n Nenhum numero 'impar' no vetor raiz. \n");	
	}
return 0;
}
