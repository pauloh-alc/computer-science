#include <stdio.h>
#define TAM 5
// Aritimética de ponteiros: mostrando elementos do vetor utilizando ponteiros
int main () 
{
	// Dicionário de dados:
	int i;
	int v[TAM];
	int *k;
	int *f = &v[TAM];
	
	// Entrada de dados:
	for (i = 0; i < TAM; i++) {
		printf("%d[] = ",i);
		scanf("%d",&v[i]);
	}
	
	// Maneira 1 de mostrar vetor:
	printf("\nvet = ");
	for (k = &v[0]; k < f; k++) {
		printf("%d, ",*k);
	}
	
	// Maneira 2 de mostrar vetor:
	printf("\nvet = ");
	k = v;
	for (i = 0; i < 5; i++) {
		printf("%d, ",*(k + i));
	}
	return 0;
}
