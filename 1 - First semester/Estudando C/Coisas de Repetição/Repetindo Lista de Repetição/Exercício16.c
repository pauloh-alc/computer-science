#include <stdio.h>

int main(){
	// Exercício 16
	
	int N, i, x;
	float pi;
		
	printf("Entre com um valor para 'N' inteiro e positivo >>> ");
	scanf("%d",&N);
	
	pi = 0;
	x = 1;
	for(i = 1; i <= N; i++){
		if(i % 2 != 0) pi = pi + 4.0 / x;
		else pi = pi - 4.0 / x;
		x += 2;
	}
	
	printf("pi = %f. \n",pi);
	
return 0;
}
