#include <stdio.h>

int main(){
	// Exercício 10 - 
	
	int N, quantDivisores, i;
	
	printf("Entre com um valor para saber se ele e PRIMO  ou NAO PRIMO >>>");
	scanf("%d",&N);
	
	i = 1;
	quantDivisores = 0;
	do{
		if(!(N % i)) quantDivisores++;		
		i++;
	}while(i <= N);
	
	if(quantDivisores == 2) printf("%d 'E' PRIMO",N);
	else printf("%d 'NAO' E PRIMO",N);

return 0;
}
