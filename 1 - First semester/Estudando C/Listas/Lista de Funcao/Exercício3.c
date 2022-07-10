#include <stdio.h>
/*
	Função: Recebe um número inteiro e retorna a soma dos divisores desse número.
	Dados de entrada:
		 n: número fornecido pelo usuário.
	Dados de saída:
		 soma: armazena a soma dos divisores do número fornecido pelo usuário.

*/

int somaDosDivisores(int n)
{
	int i, soma = 0;
	
	if (n == 0) return -1;
	
	for (i = 1; i <= n; i++) {
		if (!(n % i)) soma += i;
	}
	
	return soma;
}
int main()
{
	int valor, resultado;
	
	// Entrada de dados:
	printf("Entre com um valor inteiro positivo: ");
	scanf("%d",&valor);
	
	resultado = somaDosDivisores(valor);
	
	if (resultado == -1) printf("Erro: nao e possivel obter a soma dos divisores do numero 0. \n");
	else				 printf("A soma dos divisores do numero %d e: %d. \n", valor, resultado);
	
return 0;
}
