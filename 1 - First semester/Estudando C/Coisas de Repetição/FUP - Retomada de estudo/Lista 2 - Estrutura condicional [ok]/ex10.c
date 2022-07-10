#include <stdio.h>

int main(){
	int op;
	float n1,
		n2,
		result;
		
	puts("1. Soma.");
	puts("2. Subtracao.");
	puts("3. Multiplicacao.");
	puts("4. Divisao.");
	
	printf("Entre com um opcao: ");
	scanf("%d",&op);
	
	if(op != 1 && op != 2 && op != 3 && op != 4){
		printf("Erro: opcao invalida !!");
		return 1;
	}
	
	printf("Entre com o primeiro numero para a operacao: ");
	scanf("%f",&n1);
	printf("Entre com o segundo numero para a operacao: ");
	scanf("%f",&n2);
	
	switch(op){
		case 1:
			result = n1 + n2;
			printf("Resultado [%.2f]",result);
		break;
		
		case 2:
			result = n1 -n2;
			printf("Resultado [%.2f]",result);
		break;
		
		case 3:
			result = n1 * n2;
			printf("Resultado [%.2f]",result);
		break;
		
		case 4:
			result = n1 / n2;
			printf("Resultado [%.2f]",result);
		break;

	}
	
return 0;
}
