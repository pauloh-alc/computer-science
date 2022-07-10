#include <stdio.h>

int main(){
	// Exercício 16 -
	
	int N, i, j;
	float pi;	
	
	printf("Entre com uma quantidade N positiva de parcelas da sequencia de Gregory >>> ");
	scanf("%d",&N);
	
	pi = 4.0;
	j = 3;
	for(i = 1; i < N; i++){
		
		if(i % 2 != 0){
			pi = pi - 4.0 / j;
		}
		else{
			pi = pi + 4.0 / j;
		}
		j += 2;
	}
	printf("PI = %f\n",pi);
	
return 0;
}
