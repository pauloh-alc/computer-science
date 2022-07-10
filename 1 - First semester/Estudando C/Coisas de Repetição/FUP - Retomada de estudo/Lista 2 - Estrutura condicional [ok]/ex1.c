#include <stdio.h>

int main(){
	int a,
		b;
		
	printf("Entre com um numero A: ");
	scanf("%d",&a);
	printf("Entre com um numero B:");
	scanf("%d",&b);
	
	if(a > b){
		printf("Numero %d (A) e o MAIOR.",a);
	}else if(b > a){
		printf("Numero %d (B) e o MAIOR.",b);
	}else{
		printf("Os numero A e B sao iguais.");
	}
return 0;
}
