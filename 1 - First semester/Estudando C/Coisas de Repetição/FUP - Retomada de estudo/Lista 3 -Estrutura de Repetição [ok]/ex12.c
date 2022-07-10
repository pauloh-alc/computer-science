#include <stdio.h>

int main(){
	
	float num1,
		num2,
		result;
	
	int op;
	
	printf("Entre com o primeiro numero: ");
	scanf("%f",&num1);
	printf("Entre com o segundo numero: ");
	scanf("%f",&num2);
	
	puts("1. Adicao.");
	puts("2. Subtracao.");
	puts("3. Multiplicao.");
	puts("4. Divisao.");
	puts("5. Saida.");
	
	do{	
		printf("Entre com a 'opcao' desejada: ");
		scanf("%d",&op);
		
		if(op < 1 || op > 5) {
			printf("\nErro: opcao digitada invalida !!\n");
			printf("Digite novamente...\n\n");
			continue;
		}
		
		switch(op){
			case 1:
				result = num1 + num2;
				printf("Soma entre %.1f + %.1f = %.2f.\n",num1,num2,result);
			break;
			
			case 2:
				result = num1 - num2;
				printf("Multiplicacao entre %.1f - %.1f = %.2f.\n",num1,num2,result);
			break;
			
			case 3:
				result = num1 * num2;
				printf("Subtracao entre %.1f * %.1f = %.2f.\n",num1,num2,result);
			break;
			
			case 4:
				result = num1 / num2;
				printf("Subtracao entre %.1f / %.1f = %.2f.\n",num1,num2,result);
			break;
			
			case 5:
				default:
					printf("Voce saiu !!");
			break;
		}
	}while(op != 5);
return 0;
}
