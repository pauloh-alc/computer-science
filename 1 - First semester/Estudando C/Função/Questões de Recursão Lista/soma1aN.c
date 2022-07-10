#include <stdio.h>
int soma (int n) // n começa de 5.
{
	if (n == 0) return 0;
	
	return n + soma (n - 1);
	
}
// main(resposta = 15) -> soma (5 return 15) -> soma (4 return 10) -> soma (3 return 6) -> soma(2 return 3) -> soma(1 return 1) -> soma(0) return 0
int main ()
{
	int numero, resposta;
	
	printf("Entre com um numero 'n': ");
	scanf("%d",&numero); // numero = 5
	
	resposta = soma (numero);
	
	printf("Soma de 1 ate %d e: %d",numero, resposta);
	return 0;
}
