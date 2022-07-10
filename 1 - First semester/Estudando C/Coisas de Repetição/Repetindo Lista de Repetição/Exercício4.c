#include <stdio.h>

int main(){
	// Exercício 4 -
	
	int i, N, numero, soma;
	
	printf("Entre com um valor 'N' >>> ");
	scanf("%d",&N);
	
	soma = 0;
	for(i = 1; i <= N; i++){
		printf("Entre com o valor %d - ",i);
		scanf("%d",&numero);
		soma = soma + numero;
	}
	printf("Soma final = %d.\n",soma);
return 0;
}
