#include <stdio.h>

int main(){
	// Exercício 14 
	int N, i, j, soma;
	printf("Entre com um valor para 'N' >>> ");
	scanf("%d",&N);
	
	soma = 0;
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			soma = soma + 1;
			printf("%d ", soma);
		}
		printf("\n");
	}


return 0;
}
