#include <stdio.h>
	int somaDivisores (int n)
	{
		int i;
		int soma = 0;
		
		for (i = 1; i <= n; i++) {
			if (n % i == 0) {
				soma = soma + i; 
			}
		}

	return soma;
	}
int main ()
{
	// Dicionário de dados:
	int numero;
	
	// Entrada de dados:
	printf("Entre com um 'numero' positivo para saber a soma de seus divisores: ");
	scanf("%d",&numero);
	
	int resultado = somaDivisores (numero);
	
	// Saída de dados:
	printf("A soma dos divisores de %d e: %d. \n",numero, resultado);
	return 0;
}
