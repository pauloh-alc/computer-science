#include <stdio.h>
#include <math.h>

int main(){
	// Exercício 08 da list 2 -
	
	int num1, num2, num3;
	
	printf("Entre com o primeiro numero >>> ");
	scanf("%d",&num1);
	printf("Entre com o segundo numero >>> ");
	scanf("%d",&num2);
	printf("Entre com o terceiro numero >>> ");
	scanf("%d",&num3);
	
	if(num1 > num2 && num1 > num3){
		printf("Maior numero e = %d.\n",num1);
	}
	else if(num2 > num1 && num2 > num3){
		printf("Maior numero e = %d.\n",num2);
	}
	else if(num3 > num1 && num3 > num2){
		printf("Maior numero e = %d.\n",num3);
	}
	
return 0;
}
