#include <stdio.h>
float H(float n)
{
	if (n == 0) return 1;
	
	return 1 / n +  H (n - 1);
	
}
int main ()
{
	// Dicionário de dados:
	float numero, h;
	
	// Entrada de dados:
	printf("Entre com um numero 'n': ");
	scanf("%f",&numero);
	
	h = H (numero);

	printf("%.2f. \n",h);
	return 0;
}
