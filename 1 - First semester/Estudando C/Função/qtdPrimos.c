#include <stdio.h>

int primo (int n, int *q) 
{
	int i, div;
	
	div = 0;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) div += 1;
	}
	if (div == 2) {
		*q += 1;
		return n;	
	}
	else {
		return 0;	
	}
	
}

int main () 
{
	int cont = 0, numero, resposta;
	int quantidade;
	
	printf("Entre com um numero 'q'  para a quantidade de primos que voce quer imprimir: ");
	scanf("%d",&quantidade);
	numero = 1;
	while (1) {
		resposta = primo (numero, &cont);
		if (resposta) printf("%d ", resposta);
	numero += 1;
	if (cont >= quantidade) break;
	}
	return 0;
}
