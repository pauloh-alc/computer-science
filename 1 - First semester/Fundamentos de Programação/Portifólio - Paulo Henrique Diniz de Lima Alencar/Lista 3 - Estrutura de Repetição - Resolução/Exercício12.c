#include <stdio.h>

int main(){
	// Exercício 12 -
	 
	int opcao;
	float num1, num2;
	float resultado;
	
	do{
		
		puts("1. Adicao");
		puts("2. Subtracao");
		puts("3. Multiplicacao");
		puts("4. Divisao");
		puts("5. Saida");
		printf("Entre com a opcao desejada >>>");
		scanf("%d",&opcao);
		
		if(opcao == 5){
			printf("Voce saiu do MENU DE OPCAO.\n\n");
			return 1;
		}
		
		if(opcao >= 1 && opcao < 5){
			printf("- Primeiro numero >>>");
			scanf("%f",&num1);
			printf("- Segundo numero >>>");
			scanf("%f",&num2);
		}
	
		switch(opcao){
			
			case 1: 
				resultado = num1 + num2;
				printf("A soma de %.1f + %.1f = %.1f.\n\n",num1, num2, resultado);
			break;
			
			case 2:
				resultado = num1 - num2;
				printf("A subtracao de %.1f - %.1f = %.1f\n\n",num1, num2, resultado);
			break;
			
			case 3:
				resultado = num1 * num2;
				printf("A Multiplicacao entre %.1f x %.1f = %.1f\n\n",num1, num2, resultado);
			break;
			
			case 4:
				resultado = num1 / num2;
				printf("A Divisao entre %.1f / %.1f = %.1f\n\n",num1, num2, resultado);
			break;
			
			default:
				printf("Voce digitou um valor invalido!\n\n");	
		}
		
	}while(opcao != 5);

	
return 0;
}
