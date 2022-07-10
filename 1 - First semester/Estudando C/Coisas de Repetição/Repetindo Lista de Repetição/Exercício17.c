#include <stdio.h>

int main(){
		// Exercício 17
		
	int N, termo, anterior,i;
				
	printf("Entre com um valor para 'N' inteiro e positivo >>> ");
	scanf("%d",&N);
	
	termo = 1;
	anterior = 0;
	for(i = 1; i <= N; i++){
		termo = termo + anterior;
		printf("%d",termo);
		if(i < N)printf(", ");
		anterior = termo - anterior;
	}
return 0;
}
