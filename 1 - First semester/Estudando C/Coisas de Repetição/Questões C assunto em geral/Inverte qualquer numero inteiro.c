#include <stdio.h>
#include <math.h>

int main(){

	int decimal, i, resto, numero, divisao;

	printf("Entre com um numero inteiro >>");
	scanf("%d",&numero);
	
	while(numero > 0){
		resto = numero % 10;
		printf("%d",resto);
		numero = numero / 10;
	}
	
return 0;
}
