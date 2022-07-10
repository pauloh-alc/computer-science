#include <stdio.h>
#include <math.h>

int main(){
	// Exercício 18 da list 1 -
	
	int numero, M,C,D,U, resto;
	
	printf("Entre com um numero inteiro positivo de 4 digitos >>>");
	scanf("%d",&numero);
	
	M = numero / 1000;
	resto = numero % 1000;
	C = resto / 100;
	resto = resto %  100;
	D = resto / 10;
	resto = resto % 10;
	U = resto;
	
	printf("%d\n", M);
	printf("%d\n", C);
	printf("%d\n", D);
	printf("%d\n", U);
	
return 0;
}
