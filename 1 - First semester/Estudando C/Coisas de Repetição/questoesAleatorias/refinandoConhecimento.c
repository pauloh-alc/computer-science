#include <stdio.h>

int main(){
	// Estudo:
	
	int N, fat, j,i,numero;
	
	printf(">>>");
	scanf("%d%*c",&N);
	
	for(i = 1; i <= N; i++){
		printf("Digite um numero para saber seu fatorial >>");
		scanf("%d%*c",&numero);
		fat = 1;
		for(j = 1; j <= numero; j++){
			fat = fat * j; // Acumulador
			printf("fat acumulando = %d\n",fat);
		}
		printf("fatorial de %d numero = %d.\n",N, fat);
	}
	
return 0;
}
