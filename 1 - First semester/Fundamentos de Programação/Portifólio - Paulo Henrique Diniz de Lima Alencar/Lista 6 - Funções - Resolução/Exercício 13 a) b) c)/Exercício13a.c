#include <stdio.h>

int sequenciaCrescente (int n)
{	
	if (n == -1) return 0;
	else {		
		sequenciaCrescente (n - 1);
		printf("%d\n",n);
	}
	
	/*
	OUTRA FORMA:
	
	if (n == -1) return -1;
	
	int algorismo = sequenciaCrescente (n - 1) + 1;
	printf("%d, ", algorismo);
	return algorismo;
	
	*/

}

int main ()
{
	// Dicionário de dados:
	int numero;
	// Entrada de dados:
	printf("Entre com um numero positivo 'n': ");
	scanf("%d",&numero);
	
	sequenciaCrescente (numero);
	return 0;
}


