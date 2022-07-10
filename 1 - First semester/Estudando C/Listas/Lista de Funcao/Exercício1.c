#include <stdio.h>

/*  
	Função: calcula o dobro de um número.
	Entrada de dados:
 		x: valor inteiro fornecido pelo usuário.
 	Saída de dados:
 		x: número fornecido pelo usuário multiplicado por 2.
 		
*/

	int dobro(int x)
	{
		x = x * 2;
		return x;
	}

int main()
{
	int numero, resultado;
	
	// Entrada de dados:
	printf("Entre com um numero inteiro: ");
	scanf("%d",&numero);
	
	resultado = dobro(numero);
	
	printf("O dobro do numero %d e: %d. \n", numero, resultado);
return 0;
}
