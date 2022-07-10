#include <stdio.h>

int main(){
	// Exercício 10 - Propostos
	int i, j, numero, somaPares, somaPrimos, quantDivisores, resto;
	
	somaPares = 0;
	somaPrimos = 0;
	
	for(i = 1; i <= 10; i++){
		printf("Entre com o %d numero >>> ",i);
		scanf("%d",&numero);
		
		if(numero % 2 == 0) somaPares = somaPares + numero;
				
		quantDivisores = 0;
		for(j = 1; j <= numero; j++){
			resto = numero % j;
			if(!resto){
				quantDivisores++;
			}
		}
		if(quantDivisores == 2) somaPrimos = somaPrimos + numero;
	}
	
	printf("Soma dos pares = %d. \n", somaPares);
	printf("Soma dos primos = %d. \n", somaPrimos);
	
return 0;
}
