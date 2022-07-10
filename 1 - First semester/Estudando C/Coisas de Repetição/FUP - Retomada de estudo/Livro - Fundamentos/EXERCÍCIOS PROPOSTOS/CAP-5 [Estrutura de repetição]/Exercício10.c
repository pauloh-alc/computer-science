#include <stdio.h>

int main(){
	
	int i,
		numero,
		somaP,
		somaI;
		
	somaP = 0;
	somaI = 0;
	i = 1;
	while(i <= 10){
		printf("Entre com o numero %d: ",i);
		scanf("%d",&numero);
		if(!(numero % 2)){
			somaP = somaP + numero;
		}
		else{
			somaI = somaI + numero;
		}
	i++;
	}
	printf("\nSoma dos numeros pares e: %d.\n",somaP);
	printf("Soma dos numeros impares e: %d.\n",somaI);
return 0;
}
