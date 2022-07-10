#include <stdio.h>
#define TAM 5

	int soma (int v[], int cont)
	{
		if (cont == TAM) return 0;
		
		return soma (v, cont + 1) + v[cont];
	}

int main ()
{
	int vetor[TAM] = {1,2,3,4,7};

	int resposta = soma (vetor, 0);
	
	printf("soma = %d. \n", resposta);
	return 0;
}
