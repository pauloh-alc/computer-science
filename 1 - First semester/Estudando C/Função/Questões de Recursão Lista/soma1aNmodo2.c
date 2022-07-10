#include <stdio.h>
int soma (int n) // n começa de 5.
{
	if (n == 0) return 0;
	
	int r = soma (n - 1); // main (resposta = 15) -> soma(5; r = 10, s = 15) -> soma(4; r = 6, s = 10) -> soma(3; r = 3, s = 6) -> soma(2; r = 1, s = 3 ) -> soma(1; r = 0, s = 1) -> soma(0) 
	int s = r + n;																 																									// vai return 0 para a função que chamou, isto é soma(1)
	return s;
}

int main ()
{
	int numero, resposta;
	
	printf("Entre com um numero 'n': ");
	scanf("%d",&numero); // numero = 5
	
	resposta = soma (numero);
	
	printf("Soma de 1 ate %d e: %d",numero, resposta);
	return 0;
}
