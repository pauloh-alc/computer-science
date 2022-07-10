#include <stdio.h>

int main(){
	// Exercício 10 -
	
	int opcao;
	float num1, num2;
	float soma, subtracao, multiplicacao, divisao;
	
	puts("1. Soma");
	puts("2. Subtracao");
	puts("3. Multiplicacao");
	puts("4. divisao");

	printf("Entre com a opcao desejada >>> ");
	scanf("%d",&opcao);
	
	if(opcao > 4 || opcao < 1){
		printf("Erro: voce digitou uma opcao invalida.");
		return 1;	
	}
	
	printf("Agora informe o primeiro valor >> ");
	scanf("%f",&num1);
	printf("Agora informe o segundo valor >>");
	scanf("%f",&num2);

	switch(opcao){
		case 1:
			soma = num1 + num2;
			printf("%.1f + %.1f = %.1f", num1, num2, soma);
		break;
		
		case 2:
			subtracao = num1 - num2;
			printf("%.1f - %.1f = %.1f", num1, num2, subtracao);
		break;
		
		case 3:
			multiplicacao = num1 * num2;
			printf("%.1f x %.1f = %.1f", num1, num2, multiplicacao);
		break;
		
		case 4:
			divisao = num1 / num2;
			printf("%.1f / %.1f = %.1f", num1, num2, divisao);
		break;
		
	}
	
	
return 0;

}
