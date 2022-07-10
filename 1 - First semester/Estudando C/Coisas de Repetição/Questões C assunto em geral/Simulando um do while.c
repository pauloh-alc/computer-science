#include <stdio.h>

int main(){
	int numero;
	// SIMULAÇÃO DO LAÇO 'do while'
	;
	/*
	do{
		printf("Entre com um numero positivo:");
		scanf("%d",&numero);
	}while(numero <= 0);
	*/
	
	while(1){  							// poderia ser !0    (pois, zero em C é falso, negação de falso é verdadeiro).
		printf("Entre com um valor: ");
		scanf("%d",&numero);
		
	if(numero >= 0) break;
	}
return 0;
}
