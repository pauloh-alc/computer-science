#include <stdio.h>

int main(){
	// Exercício 14 -
	
	int N;
	int i,j, numero;
	printf("Entre com um numero N inteiro e positivo >>> ");
	scanf("%d",&N);
	
	printf("\n- Triangulo de Floyd\n\n");
	numero = 0;
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			numero = numero + 1;
			printf("%d ", numero);
		}
		printf("\n");
	}
	
return 0;
}
