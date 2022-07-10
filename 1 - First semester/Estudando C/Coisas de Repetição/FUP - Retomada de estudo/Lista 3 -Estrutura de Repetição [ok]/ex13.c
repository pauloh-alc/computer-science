#include <stdio.h>

int main(){
	int n,
		i,
		j;
	
	// 1°	
	printf("Entre com um numero 'N': ");
	scanf("%d",&n);
	printf("\n");
	
	printf("Primeiro\n\n");
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	// 2°
	printf("Segundo\n\n");
	
	for(i = n; i >= 1; i--){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n");
	// 3°
	printf("Terceiro\n\n");
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			if(i == j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n\n");
	// 4°
	printf("Quarto\n\n");
	
	for(i = n; i >= 1; i--){
		for(j = 1; j <= i; j++){
			if(i == j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n\n");
	// 5°
	printf("Quinto\n\n");
	
	for(i = n; i >= 1; i--){
		for(j = 1; j <= n; j++){
			if(j > n - i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n\n");
	// 6°
	printf("Sexto\n\n");
	
	for(i = n; i >= 1; i--){
		for(j = 1; j <= n; j++){
			if(j >= i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n\n");
	// 7°
	printf("Setimo\n\n");
	int k;
	for(i = n; i >= 1; i--){
		for(k = 1; k <= n - i; k++){
			printf(" ");
		}	
		for(j = 1; j <= n; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	printf("\n\n");
	// 8°
	printf("Oitavo\n\n");
	
	for(i = n; i >= 1; i--){
		for(k = 1; k <= n - i; k++){
			printf(" ");
		}
		for(j = 1; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	
	printf("\n\n");
	// 9°
	printf("Nono\n\n");
	
	for(i = n; i >= 1; i--){
		for(k = 1; k <= n - i; k++){
			printf(" ");	
		}
		for(j = 1; j <= i; j++){
			if(j == 1 || j == i) printf("*");
			else printf(" ");
			printf(" ");
		}
		printf("\n");
	}
return 0;
}
