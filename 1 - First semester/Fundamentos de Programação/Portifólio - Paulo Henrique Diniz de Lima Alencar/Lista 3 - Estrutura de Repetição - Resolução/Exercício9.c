#include <stdio.h>

int main(){
	// Exercício 9 -
		int a, b, num1, num2, i;
	int maximoDivisor;
	
	printf("Entre com 2 numeros RESPECTIVAMENTE inteiros positivos para o programa calcular o MDC >>> ");
	scanf("%d%d",&a, &b);
	
	num1 = a;
	num2 = b;
	i = 2;
	maximoDivisor = 1;
	while(num1 > 1 || num2 > 1){
		
		if(num1 % i == 0 && num2 % i == 0) maximoDivisor = maximoDivisor * i; 	
		
		if(num1 % i == 0) num1 = num1 / i;	
	    if(num2 % i == 0) num2 = num2 / i;
	    
		if(num1 % i != 0 && num2 % i != 0) i++;	
	}
	printf("O maximo divisor comum MDC(%d,%d) e = %d.\n",a,b, maximoDivisor);
return 0;
}
