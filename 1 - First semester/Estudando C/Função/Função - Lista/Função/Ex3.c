#include <stdio.h>

	int soma (int n)
	{
		int i, soma = 0;
		
		i = 1;
		while (i <= n) {
			if (n % i == 0) {
				soma += i; 
			}
		i++;
		}
		
		return soma;
	}
	
	 void exibir (int n)
	 {
		printf("A soma dos divisores de %d e: %d. \n",n, soma (n));
	 }
	
int main ()
{
	int numero;
	
	printf("Entre com um valor inteiro positivo: ");
	scanf("%d",&numero);
	
	exibir (numero);
}
