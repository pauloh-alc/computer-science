#include <stdio.h>

int main(){
	// Exercício 6 -
	int N, i, somaI;
	
	printf("Entre com um valor N inteiro e positivo >>> ");
	scanf("%d",&N);
	
	somaI = 0;
	
	i = N;
	while(i > 0){
		i--;
		if(i % 2 != 0) somaI = somaI + i;
	}
	printf("soma de todos os numeros impares positivos menores do um valor %d entrado pelo usuario e = %d",N,somaI);
	
return 0;
}
