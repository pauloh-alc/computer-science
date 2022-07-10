#include <stdio.h>

int main(){
	// Exercício 5 -
	int i, N, fat, memoria;
	printf("Entre com um valor 'N' para o programa retonar seu fatorial >>> ");
	scanf("%d",&N);
	
	i = 1;
	fat = 1;
	while(i <= N){
		memoria = fat * i;
		fat = memoria;
		i++;
	}
	printf("fatorial %d! = %d. \n",N, fat);
return 0;
}
