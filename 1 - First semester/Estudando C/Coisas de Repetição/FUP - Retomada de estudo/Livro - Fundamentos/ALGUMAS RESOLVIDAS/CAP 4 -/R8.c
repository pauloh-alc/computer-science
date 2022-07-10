#include <stdio.h>
#include <math.h>

int main(){
	int numero1,
		numero2,
		numero,
		soma,
		op,
		raiz;
		
	puts("1. Somar dois numeros.");
	puts("2. Raiz quadrada de um numero.");
	printf("Entre coma 'opcao' desejada: ");
	scanf("%d",&op);
	
	switch(op){
		case 1: 
			printf("Entre com o numero '1': ");
			scanf("%d",&numero1);
			printf("Entre com o numero '2': ");
			scanf("%d",&numero2);
			soma = numero1 + numero2;
			printf("Soma entre '%d' + '%d' = '%d'.\n", numero1, numero2, soma);
		break;
		case 2:  
			printf("Entre com um numero para saber raiz qudrada: ");
			scanf("%d",&numero);
			raiz = sqrt(numero);
			printf("Raiz quadrada de '%d' e >> %d.\n",numero,raiz);
		break;
		default:
			printf("Erro: voce entrou com uma opcao invalida !!\n"); 
	}
	
return 0;
}
