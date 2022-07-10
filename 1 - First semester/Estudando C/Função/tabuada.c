#include <stdio.h>


void tabuada (int i, int y) {
	
	int j, result;
	
	for (j = 0; j <= y; j++) {
		result = i * j;
		printf("%d * %d = %d. \n", i, j, result);
	}
	printf("\n");
}

int main ()
{
	int n, m, x;

	printf("Entre com um numero maximo para os 'numeros' de uma tabuada:");
	scanf("%d",&n);
	printf("Entre com um numero maximo para as 'multiplicacoes' de uma tabuada:");
	scanf("%d",&m);
	
	for (x = 0; x <= n; x++) {
		tabuada (x, m);
	}
	
	return 0;
}
