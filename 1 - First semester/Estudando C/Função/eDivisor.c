#include <stdio.h>

/*
	Função: derterminar se um número é devisor de outro.
	Dados de entrada:
		a: número fornecido pelo usuário.
		b: número fornecido pelo usuário.
	Dados de saída:
		devolve -1: se for 0,
		devolve 0: se a não for divisível por b.
		devolve 1: se a é divisível por b.
	
*/

int eDivisor(int x, int y)
{
	if (!y) { 
		return -1;
	}
	else if (x % y) {
		return 0;
	}
	return 1;
}

int main()
{	
	int a, b, devolve;
	
	// Entrada de dados:
	printf("Digite um numero 'a': ");
	scanf("%d",&a);
	printf("Digite um numero 'b': ");
	scanf("%d",&b);
	
	devolve = eDivisor(a,b);
	
	if (devolve == -1) {
		printf("Erro: nao sao permitidas divisoes por Zero !! \n");
	}
	else if (devolve == 0) {
		printf("O numero %d nao e divisivel por %d. \n", a, b);
	}
	else {
		printf("O numero %d e divisivel por %d. \n", a, b);
	}

return 0;	
}
