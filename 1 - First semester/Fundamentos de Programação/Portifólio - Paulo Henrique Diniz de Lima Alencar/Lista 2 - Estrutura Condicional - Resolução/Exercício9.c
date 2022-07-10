#include <stdio.h>

int main(){
	// Exercício 9 -
	
	int A, B, C;
	
	printf("Entre com o primeiro numero >>>");
	scanf("%d",&A);
	printf("Entre com o segundo numero >>>");
	scanf("%d",&B);
	printf("Entre com o terceiro numero >>>");
	scanf("%d",&C);
	
	if(A > B && A > C && B > C){
		printf("Ordem crescente: (%d, %d, %d)", C,B,A);
	}
	else if(A > B && A > C && C > B){
		printf("Ordem crescente: (%d, %d, %d)", B,C,A);
	}
	else if(B > A && B > C && A > C){
		printf("Ordem crescente: (%d, %d, %d)", C,A,B);
	}
	else if(B > A && B > C && C > A){
		printf("Ordem crescente: (%d, %d, %d)", A,C,B);
	}
	else if(C > A && C > B && A > B){
		printf("Ordem crescente: (%d, %d, %d)", B,A,C);
	}
	else if(C > A && C > B && B > A){
		printf("Ordem crescente: (%d, %d, %d)", A,B,C);
	}
	else{
		printf("Erro: Voce provavelmente informou algum valor igual a outro.");
	}
	
return 0;

}
