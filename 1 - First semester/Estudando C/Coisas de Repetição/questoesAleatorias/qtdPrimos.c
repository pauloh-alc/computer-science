#include <stdio.h>

int main () 
{
	int cont, div, numero, i;
	int quantidade;
	
	printf("Entre com um numero 'q'  para a quantidade de primos que voce quer imprimir: ");
	scanf("%d",&quantidade);
	
	cont = 0;
	numero = 1;
	while (cont < quantidade) {
		
		div = 0;
		for (i = 1; i <= numero; i++) {
			if (numero % i == 0) div += 1;
		}
		if (div == 2) {
			printf("%d ",numero);
			cont += 1;
		}
	numero++;
	}
	return 0;
}
