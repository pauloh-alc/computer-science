#include <stdio.h>

int main(){
	// Exercício 6 -
	int i, N, somaI;
	
	
	printf("Entre com um valor 'N' >>>");
	scanf("%d",&N);
	somaI = 0;
	for(i = N - 1; i > 0; i--){
		if(i % 2 != 0){
			somaI = somaI + i;
		}
	}
	printf("Soma dos numeros impares menores que %d e igual a [%d]. \n", N, somaI);
	
return 0;
}
