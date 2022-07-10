#include<stdio.h>

int main(){
	// Exercício 15 -
	
	int N, i;
	float H;
	
	printf("Entre com um valor para N inteiro e positivo para calcular a soma Harmonica >>>");
	scanf("%d",&N);
	printf("\n");
	
	H = 1;
	for(i = 1; i <= N; i++){
		if(i == 1) printf("H(%d) = 1 + ", N);
		
		H = H + 1.0 / i;
		printf("1/%d ",i);
		if(i < N) printf("+ "); // Para não mostrar o ultimo sinal de +;
	}
	printf("\n\nH(%d) = %f.\n",N, H);
return 0;
}
