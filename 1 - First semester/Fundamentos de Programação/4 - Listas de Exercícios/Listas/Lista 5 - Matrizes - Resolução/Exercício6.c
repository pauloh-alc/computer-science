#include <stdio.h>
#define TAM 6
int main(){
	// Dicionário de dados:
	int a[TAM], b[TAM], m[TAM][TAM];
	int i,j;
	
	// Entrada de dados:
	printf("\n Entre os %d elementos do vetor 'a': \n",TAM);
	for(i = 0; i < TAM; i++){
		printf(" %d[] = ",i);
		scanf("%d",&a[i]);	
	}
	
	printf("\n Entre os %d elementos do vetor 'b': \n",TAM);
	for(i = 0; i < TAM; i++){
		printf(" %d [] = ",i);
		scanf("%d",&b[i]);	
	}
	
	// Processamento:
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			m[i][j] = a[i] * b[j];
		}
	}
	
	// Saída:
	printf("\nMatriz [%d][%d]:\n\n",TAM,TAM);
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf("\t%d",m[i][j]);
		}
		printf("\t|\n");
	}

return 0;
}
