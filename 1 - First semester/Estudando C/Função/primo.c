#include <stdio.h>

int cont = 0;

void primo (int n) 
{
	int div, i;
	
	div = 0;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) div += 1;
	}
	if (div == 2) {
		printf("%d ",n);
		cont += 1;
	}
}

int main () 
{
	int quantidade;
	int numero;
	
	printf("Entre com um numero 'q'  para a quantidade de primos que voce quer imprimir: ");
	scanf("%d",&quantidade);
	
	numero = 2;
	do {
		primo (numero);
	numero += 1;
	} while (cont < quantidade);
	
	return 0;
}
