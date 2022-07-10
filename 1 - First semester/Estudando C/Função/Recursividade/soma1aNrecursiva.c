#include <stdio.h>
int soma (int n)
{
	if (n == 0) return 0;
	else {
		int s = soma (n - 1); 
		int resul = s + n;
		return resul;
	}
	
}
int main ()
{
	int numero, resultado;
	
	printf("Entre com um numero 'n': ");
	scanf("%d",&numero);
	
	resultado = soma (numero);
	printf("soma = %d. \n", resultado);
	
	return 0;
}
