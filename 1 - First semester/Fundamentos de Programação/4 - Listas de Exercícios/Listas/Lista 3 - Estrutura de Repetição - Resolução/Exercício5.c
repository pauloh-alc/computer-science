#include <stdio.h>

int main(){
	// Exercício 5 -
	
	int N,i, fat,x;
	
	printf("Entre com um valor N inteiro e positivo >>>");
	scanf("%d",&N);
	
	fat = 1; 
	for(i = 1; i <= N; i++){  
		fat = fat * i;
		printf("fat = %d\n",fat);
	}
	printf("O fatorial do numero %d e igual a %d.\n", N, fat);
	
return 0;
}
