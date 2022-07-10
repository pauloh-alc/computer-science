#include <stdio.h>
#include <math.h>

int main(){
	// Exercício 18  
	int binario, soma, resto, i;
	int divisao, resul;
	
	printf("Entre com um numero binario >>> ");
	scanf("%d",&binario);
	
	divisao = binario;
	soma = 0;
	i = 0;
	do{
		resto = divisao % 10; 
		divisao = divisao / 10; 
		resul = pow(2,i) * resto;
		soma = soma + resul;
		i++;
	}while(divisao > 0);
	printf("O binario %d em decimal e = %d.\n",binario, soma);
return 0;
}
