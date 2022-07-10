#include <stdio.h>
	int dobro (int n)
	{
		n = n * 2;
		
		return n;
	}
int main () 
{
	int numero, valorDobrado;
	
	printf("Entre com um numero: ");
	scanf("%d",&numero);
	
	valorDobrado = dobro (numero);
	
	printf("O dobro do numero %d e: %d. \n",numero, valorDobrado);
}
