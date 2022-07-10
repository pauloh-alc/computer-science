#include <stdio.h>

int main(){
	// Exercício 3 -
	
	int a, b;
	
	printf("Entre com um numero A >>");
	scanf("%d",&a);
	printf("Entre com um numero B >>");
	scanf("%d",&b);
	
	if(a % b == 0){
		printf("O numero A (%d) E multiplo do numero B (%d).", a,b);
	}
	else{
		printf("O numero A (%d) NAO E multiplo do numero B (%d).", a,b);
	}


return 0;

}