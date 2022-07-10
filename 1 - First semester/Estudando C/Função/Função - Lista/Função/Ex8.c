#include <stdio.h>
#define TAM 30
int main ()
{
	int i;
	int vetor[TAM];
	int n;
	
	printf("Entre com uma quantidade 'n' de elementos que voce deseja no vetor: ");
	scanf("%d",&n);
	
	for (i = 0; i < n; i++) {
		printf("%d[] = ",i);
		scanf("%d",&vetor[i]);
	}
	return 0;
}
