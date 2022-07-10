#include <stdio.h>

int main(){
	// Exercício 8 -
	
	int num1, num2, num3;
	
	printf("Entre com o primeiro numero >>>");
	scanf("%d",&num1);
	printf("Entre com o segundo numero >>>");
	scanf("%d",&num2);
	printf("Entre com o terceiro numero >>>");
	scanf("%d",&num3);
	
	if(num1 > num2 && num1 > num3){
		printf("O maior numero e o primeiro = %d.", num1);
	}
	else if(num2 > num1 &&  num2 > num3){
		printf("O maior numero e o segundo = %d.", num2);
	}
	else if(num3 > num1  && num3 > num2){
		printf("O maior numero e o terceiro = %d.", num3);
	}
	else{
		printf("Erro: voce informou todos os valores iguais, nao tem como saber quem e o maior.");
	}

	
return 0;

}