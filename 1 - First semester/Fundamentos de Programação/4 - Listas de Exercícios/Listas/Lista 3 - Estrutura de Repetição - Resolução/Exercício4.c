#include <stdio.h>

int main(){
	// Exercício 4 -
	int N, i, numero, soma;
	
	printf("Entre com um numero N >>> ");
	scanf("%d",&N);
	
	soma = 0;
	for(i = 1; i <= N; i++){
		printf("%d - numero >>> ",i);
		scanf("%d",&numero);
		soma = soma + numero;
	}
	printf("A soma dos numeros digitados: SOMA = %d.\n",soma);
return 0;
}
