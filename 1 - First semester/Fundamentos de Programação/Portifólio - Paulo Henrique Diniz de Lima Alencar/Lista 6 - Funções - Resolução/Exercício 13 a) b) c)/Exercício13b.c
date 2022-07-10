#include <stdio.h>

int sequenciaDecrescente (int n, int cont)
{
	if (cont == n) return n + 1;
	
	int algarismo = sequenciaDecrescente (n, cont + 1) - 1;
	printf("%d, ",algarismo);
	
	return algarismo;
}

int main ()
{
	// Dicionário de dados:
	int numero;
	// Entrada de dados:
	printf("Entre com um numero positivo 'n': ");
	scanf("%d",&numero);
	
	sequenciaDecrescente (numero, 0);
	
	return 0;
}
