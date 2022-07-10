#include <stdio.h>

int main(){
	int numero, i;
	int div;
	
	do{
		i = 0;
		printf("Entre com um numero: ");
		scanf("%d",&numero);
		
		div = numero;
		do{
			div = div / 10;
			i++;
		}while(div > 0);
	if(i > 3) printf("Voce digitou um numero com mais de 3 digitos!!\n");
	}while(i >= 3);
	
return 0;
}
