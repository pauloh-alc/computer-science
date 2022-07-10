#include <stdio.h>

int main(){
	
	float n1,
		  n2,
		  	media,
		  	divisao,
			diferenca,
			produto;
			
	int opcao;
	
	printf("Entre con dois numeros respectivamente: ");
	scanf("%f%f",&n1,&n2);
	
	puts("1. Media entre os dois numeros digitados. ");
	puts("2. Diferenca do maior pelo menor. ");
	puts("3. Produto entre os numeros digitados. ");
	puts("4. Divisao do primeiro pelo segundo. ");
	
	printf("Entre com a 'opcao' digitada: ");
	scanf("%d",&opcao);

	switch(opcao){
		case 1:
			media = (n1 + n2) / 2.0; 
			printf("Media entre os dois numeros digitados: %f.\n",media);
		break;
		
		case 2:
			if(n1 > n2) diferenca = n1 - n2;
			else diferenca = n2 - n1;
			printf("Diferenca entre o maior e o menor: %f.\n",diferenca);
		break;
		
		case 3:
			produto = n1 * n2;
			printf("Produto entre os numeros digitador e: %f.\n",produto);
		break;
		
		case 4:
			divisao = n1 / n2;
			printf("Divisao do primeiro pelo segundo: %f.\n",divisao);
		break;
		
		default:
			printf("Erro: voce entrou com uma opcao invalida !!\n");
	}
return 0;
}
