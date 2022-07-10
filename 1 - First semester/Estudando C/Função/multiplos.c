#include <stdio.h>

/*

	Função: Apresenta na tela em ordem crescente, os 'k' primeiros naturais que são multiplos de x ou y, fornecidos pelo usuário.
	Entrada de dados:
		k: quantidade de naturais que devem ser aprensentados na tela, k > 0.
		x: primeiro número natural fornecido pelo usuário.
		y: segundo número natural fornecido pelo usuário.
	Saída de dados:
		São exibidos k números na tela, por meio da impressão de i.   
*/

void multiplos(int k, int x, int y)
{	
	int cont = 0;
	int i = 0;
	while (cont < k) {
		if(i % x == 0 || i % y == 0) {
			printf("%d, ",i);
			cont++;
		}
	i += 1;
	}
}

int main()
{
	// Dicionário de dados:
	int a, b, n;
	
	// Entrada de dados:
	printf("Entre com um numero natural 'n': ");
	scanf("%d",&n);
	printf("Entre com um numero 'a' e 'b' respectivamente no seguinte formato a:b >> ");
	scanf("%d:%d",&a,&b);
	
	multiplos(n, a, b);
return 0;
}
