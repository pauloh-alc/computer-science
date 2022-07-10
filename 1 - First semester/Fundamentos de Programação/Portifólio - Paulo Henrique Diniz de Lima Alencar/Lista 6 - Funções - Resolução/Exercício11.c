#include <stdio.h>
	int somatorio (int n)
	{
		if (n == 0) {
			return 0;
		}
		
		return n + somatorio (n - 1);
	}
int main () {
	// Dicionário de dados:
	int n, soma;
	
	// Entrada de dados:
	printf("Entre com um numero 'n': ");
	scanf("%d",&n);
	
	soma = somatorio (n);
	
	printf("\nsoma = %d",soma);
	return 0;
}
