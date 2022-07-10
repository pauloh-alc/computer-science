#include <stdio.h>

int main(){
	// Exercício 12 - 
	float num1, num2, result;
	int opcao;
	do{
		printf("Entre com o primeiro numero >>> ");
		scanf("%f",&num1);
		printf("Entre com o segundo numero >>> ");
		scanf("%f",&num2);
		
		puts("1. Adicao.");
		puts("2. Subtracao.");
		puts("3. Multiplicacao.");
		puts("4. Divisao.");
		puts("5. Sair.");
		printf("Entre com a opcao desejada >>> ");
		scanf("%d",&opcao);
		
		if(opcao != 5){
			if(opcao == 1){
				result = num1 + num2;
			}
			else if(opcao == 2){
				result = num1 - num2;
			}
			else if(opcao == 3){
				result = num1 * num2;
			}
			else if(opcao == 4){
				result = num1 / num2;
			}
			else{
				printf("Voce digitou uma opcao invalidade, insira os valores novamente.");
			}
			printf("Resultado = %f. \n", result);
		}
	}while(opcao != 5);
	
	printf("\nVoce saiu.\n");
return 0;
}
