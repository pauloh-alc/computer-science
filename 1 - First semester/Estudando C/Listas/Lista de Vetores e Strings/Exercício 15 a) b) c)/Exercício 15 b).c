#include <stdio.h>
#define TAM 10

int main(){ // União de dois vetores (sem repeticoes):
	
	// Dicionário de dados:
	int x[TAM];
	int y[TAM];
	int uniaoR[TAM*2];
	int uniao[TAM*2];
	
	int i,j,n,tamanho,naoExiste;
	
	// Entrada de dados:
	printf("Entre com o vetor x:\n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&x[i]);
	}
	
	printf("\nEntre com o vetor y:\n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&y[i]);
	}
	
	// Processamento:
	
		// União entre x[TAM] e y[TAM], ainda temos elementos repetidos
		for(i = 0; i < TAM; i++){
			uniaoR[i] = x[i];
		}
		
		n = TAM;
		for(i = 0; i < TAM*2; i++){
			uniaoR[n] = y[i];
			n++;
		}
			
		// Remoção dos elementos repetidos da união entre x[TAM] e y[TAM], isto é, do vetor uniaoR[TAM*2]
		
		// Algoritmo remove elementos repetidos de um vetor, deixando apenas uma ocorrência.
		tamanho = 1;
		for(i = 0; i < TAM*2; i++){
			if(i == 0) uniao[i] = uniaoR[i];
			naoExiste = 0;
			for(j = 0; j < tamanho; j++){
				if(uniaoR[i] == uniao[j]){
					naoExiste = 0;
					break;
				}
				else{
					naoExiste = 1;
				}
			}
			if(naoExiste == 1){
				uniao[tamanho] = uniaoR[i];
				tamanho++;	
			}
		}
		
	// Saída: imprimindo união.
	printf("\nUniao:");
	for(i = 0; i < tamanho; i++){
		printf("[%d]",uniao[i]);
	}
			
return 0;
}
