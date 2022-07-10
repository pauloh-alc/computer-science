#include <stdio.h>
/*
	Função: Calcula a soma dos n primeiros números naturais.
	Dados de entrada:
		n: número natural fornecido pelo usuário.
	Dados de saída:
		soma: soma dos n primeiros números naturais começando de 1.
*/
int somaInt(int n)
{
	int i, soma = 0;
	
	for (i = 1; i <= n; i++) {
		soma = soma + i;
	}
	
	return soma;
} 

int main()
{	
	int n, resultado;
	
	// Entrada de dados:
	do {
		printf("Entre com um numero 'n': ");
		scanf("%d", &n);
		
		resultado = somaInt(n);
		
		// Saída de dados:
		printf("A soma dos '%d' primeiros numeros naturais e: %d. \n", n, resultado);
	} while (n > 0);

return 0;
}
