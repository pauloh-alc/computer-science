#include <stdio.h>

int soma(int n){
	int i,
		soma;
		
		soma = 0;
		for(i = 1; i <= n; i++){
			soma = soma + i;	
		}
		return soma;
}

int main(){
	int x,
		resultado;
		
	printf("Digite um numero 'n' inteiro e positivo: ");
	scanf("%d",&x);
	
	resultado = soma(x);
	printf("Soma = %d. \n",resultado);
return 0;
}
