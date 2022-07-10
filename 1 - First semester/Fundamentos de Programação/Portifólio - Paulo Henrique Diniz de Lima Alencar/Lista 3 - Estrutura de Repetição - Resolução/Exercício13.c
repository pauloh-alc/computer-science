#include <stdio.h>

int main(){
	// Exercício 13 -
	
	int N;
	int i,j;
	printf("Entre com um numero N inteiro e positivo >>> ");
	scanf("%d",&N);
	
	printf("\n");
	printf("Forma 1 -\n\n");
	
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			printf("*");	
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Forma 2 -\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	printf("\n");
	printf("Forma 3 -\n\n");
	
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			if(j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Forma 4 -\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			if(j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Forma 5 -\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= N; j++){
			if(j > N - i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Forma 6 -\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= N; j++){
			if(j >= i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Forma 7 -\n\n");
	int k;
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= N; j++){
			printf("*");
			printf(" ");	
		}
		printf("\n");
		for(k = 0; k <= N - i; k++){
			printf(" ");	
		}
	}
	
	printf("\n");
	printf("Forma 8 -\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			printf("*");
			printf(" ");
		}
		printf("\n");
		for(k = 0; k <= N - i; k++){
			printf(" ");
		}
	}
	
	printf("\n");
	printf("Forma 9 -\n\n");
	
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			if(j == 1 || j == i){
				printf("*");	
			}
			printf(" ");
			printf(" ");
		}
		printf("\n");
		for(k = 0; k <= N - i; k++){
			printf(" ");
		}
	}
return 0;
}
