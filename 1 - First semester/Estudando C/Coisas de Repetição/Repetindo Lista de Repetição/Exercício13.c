#include <stdio.h>

int main(){
	// Exercício 13  
	int N, i, j;
	
	printf("Entre com um valor 'N' inteiro e positivo >>> ");
	scanf("%d",&N);
	
	printf("1 - forma\n\n");
	
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n2 - forma\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("3 - forma\n\n");
	
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			if(j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("4 - forma\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			if(j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("5 - forma\n\n");
	
	for(i = 1; i <= N; i++){
		for(j = 1; j <= N; j++){
			if(j >= i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("6 - forma\n\n");
		
	for(i = N; i > 0; i--){
		for(j = 1; j <= N; j++){
			if(j >= i)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n7 - forma\n\n");
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
	
	
	printf("\n8 - forma\n\n");
	
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
	
	
	printf("\n9 - forma\n\n");
	
	for(i = N; i > 0; i--){
		for(j = 1; j <= i; j++){
			if(j == 1 || j == i)printf("*");
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
