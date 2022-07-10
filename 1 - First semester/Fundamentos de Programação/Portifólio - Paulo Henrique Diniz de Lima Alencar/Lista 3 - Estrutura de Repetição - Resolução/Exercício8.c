#include <stdio.h>

int main(){
	// Exercício 8 -
	
	int a, b, num1, num2, i;
	int minimoMultiplo;
	
	printf("Entre com 2 numeros RESPECTIVAMENTE inteiros positivos para o programa calcular o MMC >>> ");
	scanf("%d%d",&a, &b);
	
	num1 = a;
	num2 = b;
	i = 2;
	minimoMultiplo = 1;
	while(num1 > 1 || num2 > 1){
		
		if(num1 % i == 0 || num2 % i == 0) minimoMultiplo = minimoMultiplo * i; 	
		
		if(num1 % i == 0) num1 = num1 / i;	
	    if(num2 % i == 0) num2 = num2 / i;
	    
		if(num1 % i != 0 && num2 % i != 0) i++;	
	}
	printf("O minimo multiplo comum  MMC(%d,%d) e = %d.\n",a,b, minimoMultiplo);
return 0;
}
