#include <stdio.h>

int main(){
	// Exercício 9 -
	
	int num1, num2, a, b, i;
	int maiorDivisor;
	printf("Entre com 2 numeros RESPECTIVAMENTE inteiros positivos para o programa calcular o MDC >>> ");
	scanf("%d%d",&a, &b);
	
	num1 = a;
	num2 = b;
	
	maiorDivisor = 1;
	i = 2;
	while(num1 > 1 || num2 > 1){
		
		if(num1 % i == 0 && num2 % i == 0) maiorDivisor = maiorDivisor * i;
		
		if(num1 % i == 0) num1 = num1 / i;
		if(num2 % i == 0) num2 = num2 / i;
		
		if(num1 % i != 0 && num2 % i != 0) i++;
	}
	printf("O maior divisor MDC(%d,%d) e = %d.\n",a,b, maiorDivisor);
	
	

return 0;
}
