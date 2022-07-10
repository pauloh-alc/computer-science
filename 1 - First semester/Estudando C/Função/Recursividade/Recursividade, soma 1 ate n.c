#include <stdio.h>

int soma (int n)
{
	if (n == 1) return 1;
	
	//return n + soma (n - 1);
	int num = soma (n - 1);
	int r = num + n;
	
	return r;
}


int main()
{
	int numero, resultado;
	
	printf("Entre com um numero: ");
	scanf("%d",&numero); // numero = 5.
	
	resultado = soma (numero);
	
	printf("resultado = %d. \n",resultado);
	return 0;	
}
