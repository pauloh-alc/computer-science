#include <stdio.h>

int main(){
	// Exercício 17 - 
	
	int N, termo, anterior, i;
	
	printf("Entre com um N positivo para saber os N primeiros termos da sequencia de Fibonacci >>>");
	scanf("%d",&N);
	
	termo = 1;
	anterior = 0;
	
	for(i = 1; i <= N; i++){	
		printf("%d, ", termo);
		termo = termo + anterior;
		anterior = termo - anterior;
	}
	
	
	

return 0;
}
