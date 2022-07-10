#include <stdio.h>

int contar (int num, int e)
{

	if (num == 0) return 0;
	
	contar (num / 10, e);
	int resto = num % 10;
	
	if (resto == e) {
		return contar (num / 10, e) + 1;
	}
	else {
		return contar (num / 10, e);
	}
}

int main ()
{
	// Dicionário de dados:
	int n, k, qtd;
	
	// Entrada de dados:
	printf("Entre com um numero natural 'n': ");
	scanf("%d",&n);
	
	printf("Escolha o digito que voce quer contar quantas vezes aparece: ");
	scanf("%d",&k);
	
	// Chamando função:
	qtd = contar (n,k);
	
	// Saída de dados:
	printf("%d vezes.\n",qtd);
	
	return 0;
}
