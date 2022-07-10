#include <stdio.h>

int main(){
	
	int numero, i, resultado;
	
	printf("Entre com um 'numero' para saber a tabuada desse numero: ");
	scanf("%d",&numero);
	
	i = 0;
	while(i <= 10){
		resultado = numero * i;
		printf("%d * %d = %d.\n",numero,i,resultado);
		i++;	
	}
	
return 0;
}
