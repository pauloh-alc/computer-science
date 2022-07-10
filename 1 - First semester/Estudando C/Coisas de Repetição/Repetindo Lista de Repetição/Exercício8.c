#include <stdio.h>

int main(){
	// Exercício 8 -
	int num1, num2, i, mult, a, b;
	
	printf("Entre com dois numeros respectivamente para saber o MMC desses >>> ");
	scanf("%d%d",&num1,&num2);
	
	a = num1;
	b = num2;
	
	i = 2;
	mult = 1;
	
	while(num1 != 1 || num2 != 1){
		
		if(num1 % i == 0 || num2 % i == 0) mult = mult * i;
		
		if(num1 % i == 0) num1 = num1 / i;
		if(num2 % i == 0) num2 = num2 / i;
		
		if(num1 % i != 0 && num2 % i != 0) i++;
	}
	
	printf("O MMC(%d,%d) = %d.\n", a, b, mult);
	
	
return 0;
}
