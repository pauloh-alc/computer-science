#include <stdio.h>
#include <math.h>

int main(){
	// Exercício 2 da list 2 -
	int numero;
	
	printf("Entre com um numero inteiro >>> ");
	scanf("%d",&numero);
	
	if(numero % 2 != 0){
		printf("O %d e IMPAR.\n", numero);
	}
	else{
		printf("O %d e PAR.\n", numero);
	}
	

	
return 0;
}
