#include <stdio.h>
#define TAM 20

int main(){
	// Dicionário de dados:
	int vetor[TAM],vetorP[TAM],vetorI[TAM];
	int i,i_esima,f_sima;
	
	// Entrada de dados:
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	
	// Processamento: 
	do{
		printf("Entre com a i-esima: ");
		scanf("%d",&i_esima);
	}while(i_esima < 0 || i_esima > 20);
	
	do{
		printf("Entre com a f-esima: ");
		scanf("%d",&f_sima);
	}while(f_sima < 0 || f_sima > 20 || f_sima < i_esima);
	
	// Saída de dados:
	printf("\n Vetor raiz: ");
	for(i = 0; i < TAM; i++){
		printf("[%d]",vetor[i]);
	}
	printf("\n Vetor Novo: ");
	for(i = 0; i < TAM; i++){
		if(i >= i_esima && i <= f_sima){
			printf("[%d]",vetor[i]);
		}
	}
return 0;
}
