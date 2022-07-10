#include <stdio.h> // Biblioteca standard = padrão de input and output = entrada e saida

int main(){
	// ESTUDANDO
	
	// Entrada ==>> Processamento ==>> Saída
	int N, i, j;
	
	printf(">>>");
	scanf("%d",&N);
	
	printf("primeiro\n\n");
	
	for(i = 1; i <= N; i++){
		for(j = 1; j <=	i; j++){
			printf("*");
		}
		printf("\n");	
	}
	
	printf("\nSegundo\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	

	printf("\nTerceiro\n\n");
	
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			if(j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	
	printf("\nQuarto\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			if(j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\nQuinto\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= N; j++){
			if(j > N - i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	
	printf("\nSexto\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= N; j++){
			if(j >= i) printf("*");	
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\nSetimo\n\n");
	int k;
	for(i = N; i > 0; i--){
		for(j = 1; j <= N; j++){
			printf("* ");
		}
		printf("\n");
		for(k = 0; k <= N - i; k++){
			printf(" ");
		}
	}
	
	printf("\nOitavo\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			printf("* ");
		}
		printf("\n");
		for(k = 0; k <= N - i; k++){
			printf(" ");
		}
	}
	
	printf("\nNono\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			if(j == 1 || j == i) printf("* ");
			else printf(" ");
			printf(" ");
		}
		printf("\n");
		for(k = 0; k <= N - i; k++){
			printf(" ");
		}
	}
	
return 0;
}
