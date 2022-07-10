#include <stdio.h>

int main(){
	// Exercício 3 -
	int i, N, numero, maior;
	
	printf("Entre com um valor de 'N' >>> ");
	scanf("%d",&N);
	for(i = 1; i <= N; i++){
		printf("Entre com o numero %d - ",i);
		scanf("%d",&numero);
		if(i == 1) maior = numero;
		if(numero > maior) maior = numero;
		
	}
	
	printf("O maior numero inserido foi [%d]. \n",maior);
return 0;
}
