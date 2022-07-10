#include <stdio.h>

int main(){
	
	int n1,
		n2,
		num1,
		num2,
		i,
		mult;
		
	printf("Calcular MMC -\n");	
	printf("Entre com o primeiro numero positivo: ");
	scanf("%d",&n1);
	printf("Entre com o segundo numero positivo: ");
	scanf("%d",&n2);
	
	num1 = n1;
	num2 = n2;
	
	i = 2;
	mult = 1;
	while(n1 > 1 || n2 > 1){
		
		if(n1 % i == 0 || n2 % i == 0){
			mult = mult * i;
		}

		if(n1 % i == 0) n1 = n1 / i;
		if(n2 % i == 0) n2 = n2 / i;
		
		if(n1 % i != 0 && n2 % i != 0){
			i++;
		}
	}
	printf("O MMC (%d,%d) >> %d.\n",num1,num2,mult);
	
return 0;
}
