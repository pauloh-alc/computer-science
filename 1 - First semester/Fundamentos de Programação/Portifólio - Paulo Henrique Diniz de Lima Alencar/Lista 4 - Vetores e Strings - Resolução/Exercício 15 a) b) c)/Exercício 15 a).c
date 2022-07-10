#include <stdio.h>
#define TAM 5
int main ()
{
	// Dicionário de dados:
	int i, n = 0, j;
	int intersecao[TAM];
	char v1[TAM], v1Novo[TAM];
	char v2[TAM], v2Novo[TAM];
	int tamanho, diferente;
	
	// Entrada de dados do v1[0..9]: não permite a entrada de 
	// elementos repetidos no vetor.	 
	printf("Vetor 1: \n");
	i = 0;	
	do{
		printf("%d[] = ",i);
		scanf("%d",&v1[i]);
		
		if (i == 0) {
			tamanho = 0;
			v1Novo[tamanho] = v1[i];	
			tamanho = 1;
		}
		diferente = 0;
		for (j = 0; j < tamanho; j++) {
			if (v1[i] == v1Novo[j] && i != 0) {
				diferente = 0;
				printf("Erro: vc digitou elemento repetido, digite o elemento novamente.\n");
				break;
			}
			else{
				diferente = 1;
			}
		}
		if (diferente == 1 && i != 0) {
			v1Novo[tamanho] = v1[i];
			tamanho++;
		}

	if (diferente != 0) i++;

	} while(i < TAM || diferente == 0);
	
	// Entrada de dados do v2[0..9]: não permite a entrada de 
	// elementos repetidos no vetor.
	printf("\nVetor 2: \n");	 
	i = 0;	
	do{
		printf("%d[] = ",i);
		scanf("%d",&v2[i]);
		
		if (i == 0) {
			tamanho = 0;
			v2Novo[tamanho] = v2[i];	
			tamanho = 1;
		}
		diferente = 0;
		for (j = 0; j < tamanho; j++) {
			if (v2[i] == v2Novo[j] && i != 0) {
				diferente = 0;
				printf("Erro: vc digitou elemento repetido, digite o elemento novamente.\n");
				break;
			}
			else{
				diferente = 1;
			}
		}
		if (diferente == 1 && i != 0) {
			v2Novo[tamanho] = v2[i];
			tamanho++;
		}

	if (diferente != 0) i++;

	} while(i < TAM || diferente == 0);
	
	// Processamento: interseção entre os vetores.
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			if(v1Novo[i] == v2Novo[j]) {
				intersecao[n] = v1Novo[i];
				n++;
			}
		}
	}
	
	// Saída de dados: interseção entre os vetores.
	printf("\nIntersecao: \n");
	for (i = 0; i < n; i++) {
		printf("[%d]",intersecao[i]);
	}
	
	return 0;
}
