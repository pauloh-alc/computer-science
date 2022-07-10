#include <stdio.h>

int main(){
	// Exercício 10 -
	
	int N, contador, i, resto;
	
	printf("Entre com um numero N para saber se ele e PRIMO >>>");
	scanf("%d",&N);
	
	contador = 0;
	for(i = 1; i <= N; i++){
		
		resto = N % i;
		
		if(resto == 0){
			contador = contador + 1;
		}
	}
	
	if(contador == 2) printf("O numero %d E PRIMO.",N);
	else printf("O numero %d NAO E primo",N);
	
return 0;
}
