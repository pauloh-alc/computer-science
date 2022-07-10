#include <stdio.h>

int main(){
	int numero;
	
	printf("Entre com um numero: ");
	scanf("%d",&numero);
	
	if(numero % 2 == 0){
		printf("O numero %d e PAR.",numero);
	}else{
		printf("O numero %d e IMPAR.",numero);
	}
	
return 0;
}
