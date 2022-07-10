#include <stdio.h>

int sequenciaPares (int n)
{
	if (n == -1) return -1;
	else {
		int numero = sequenciaPares (n - 1) + 1;
		if (numero % 2 == 0) printf("%d \n",numero);
		return numero;
	}
}

int main ()
{
	// Dicionário de dados:
	int numero;
	// Entrada de dados:
	printf("Entre com um numero positivo 'n': ");
	scanf("%d",&numero);
	
	sequenciaPares (numero);
	
	return 0;
}
