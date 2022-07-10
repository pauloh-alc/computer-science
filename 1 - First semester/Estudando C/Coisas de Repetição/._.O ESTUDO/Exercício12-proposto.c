#include <stdio.h>

int main(){
	// Exercício 12 - Propostos
	
	int i, j, numero, primos, quantidadeDivisores;
	
	primos = 0;
	for(i = 1; i <= 10; i++){
		printf("Entre com o numero %d - ",i);
		scanf("%d",&numero);
		
		quantidadeDivisores = 0;
		printf("%d\n", quantidadeDivisores);
		for(j = 1; j <= numero; j++){
			if(numero % j == 0) quantidadeDivisores++;
		}
		if(quantidadeDivisores == 2) primos++;
			printf("%d\n", quantidadeDivisores);
	}
	printf("Quantidade de primos entre os numero digitados foi [%d]. \n", primos);
return 0;
}
