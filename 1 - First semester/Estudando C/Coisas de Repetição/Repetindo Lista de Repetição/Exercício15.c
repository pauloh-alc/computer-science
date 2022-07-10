#include <stdio.h>

int main(){
	// Exercício 15
	int N, i;
	float H;
	
	printf("Entre com um valor para 'N' inteiro e positivo >>> ");
	scanf("%d",&N);
	
	H = 1;
	printf("H = 1 + ");
	for(i = 1; i <= N; i++){
		H = H + 1.0 / i;
		printf("1/%d", i);
		if(i < N)printf(" + ");
	}
	
	printf("\nValor de H = %.2f. \n", H);
return 0;
}
