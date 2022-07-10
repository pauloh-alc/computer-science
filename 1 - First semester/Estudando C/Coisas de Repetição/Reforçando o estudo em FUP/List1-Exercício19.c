#include <stdio.h>
#include <math.h>

int main(){
	// Exercício 19 da list 1 -
	
	int numero ,C,D,U, divisao;
	
	printf("Entre com um numero inteiro positivo de 3 digitos >>>");
	scanf("%d",&numero);
	
	U = numero % 10;
	divisao = numero / 10;
	D = divisao % 10;
	divisao = divisao / 10;
	C = divisao;
	
	printf("%d", U);
	printf("%d", D);
	printf("%d", C);

	
return 0;
}
