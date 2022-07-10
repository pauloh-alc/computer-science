#include <stdio.h>

int main(){
	
	int i,
		numero,
		j,
		resto,
		qtd,
		cont;
		
	qtd = 0;
	for(i = 0; i < 10; i++){
		printf("Entre com um numero: ");
		scanf("%d",&numero);
		cont = 0;
		for(j = 1; j <= numero; j++){
			resto = numero % j;
			if(!(resto)){
				cont++;
			}
		}
		if(cont == 2) qtd += 1; 
	}
	printf("Quantidade de primos digitados foi: %d.\n",qtd);
return 0;
}
