#include <stdio.h>
#define TAM 10
int main(){
	// Dicionário de dados:
	int vetor1[TAM], vetor2[TAM], v[TAM*2];
	int i, j, erro, n;
	int menor, pos;
	
	// Entrada de dados:
	printf("Dados do primeiro vetor: em ordem crescente\n");
	while (1) {
		erro = 0;
		
		printf("%d[] = ",i);
		scanf("%d",&vetor1[i]);
		
		if (i != 0) {
			if (vetor1[i-1] >= vetor1[i]) {
				erro = 1;
				printf("Erro: o elemento digitado e menor que o anterior, digite em ordem crescente.\n");
			}
		}
		if(erro != 1) i++;
	
	if (i == TAM && erro == 0) break;
	}
	
	printf("\nDados do segundo vetor: em ordem crescente\n");
	i = 0;
	while (1) {
		erro = 0;
		
		printf("%d[] = ",i);
		scanf("%d",&vetor2[i]);
		
		if(i != 0){
			if (vetor2[i-1] >= vetor2[i]) {
				erro = 1;
				printf("Erro: o elemento digitado e menor que o anterior, digite em ordem crescente.\n");
			}	
		}
		
		if(erro != 1) i++;
		
	if (i == TAM && erro == 0) break;
	}
	// Processamento:
	n = 0;
	for (i = 0; i < TAM * 2; i++) {
		if (i < TAM) {
			v[i] = vetor1[i];
		}
		else {
			v[i] = vetor2[n];
			n++;
		}	
	}
	// Saída de dados: juntando vetor1 + vetor2
	printf("\n Vetores unidos:");
	for (i = 0; i < TAM * 2; i++) {
		printf("[%d]",v[i]);
	}
	
	// Ordenação de v[0..(TAM*2)-1]
	
	for (i = 0; i < (TAM * 2) - 1; i++) {
		menor = v[i];
		pos = i;
		for (j = i; j < TAM * 2; j++) {
			if (v[j] < menor) {
				menor = v[j];
				pos = j;
			}
		}
		v[pos] = v[i];
		v[i] = menor; 
	}
	
	printf("\n Vetor ordenado:");
	for (i = 0; i < TAM * 2; i++) {
		printf("[%d]",v[i]);
	}
	
return 0;
}
