#include <stdio.h>

int main(){
	// Exercício 3 -
	int i, numero, N, maior;
	
	printf("Entre com um valor N inteiro >>>");
	scanf("%d",&N);
	
	if(N <= 0){
		printf("Erro: Voce precisa entrar com um valor maior que Zero.");
		return 1;
	}
	
	for(i = 1; i <= N; i++){
		printf("%d - numero >>> ",i);
		scanf("%d",&numero);
		if(i == 1){
			maior = numero;
		}
		if(numero > maior) maior = numero;
	}
	printf("Maior numero digitado foi >>> %d.\n",maior);
return 0;
}
