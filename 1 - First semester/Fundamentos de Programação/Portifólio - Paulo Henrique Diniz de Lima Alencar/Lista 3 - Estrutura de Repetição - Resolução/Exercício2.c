#include <stdio.h>

int main(){
	// Exercício 2 -
	
	int numero, i, resultado;
	
	printf("Entre com um valor entre ]1 - 9[  >>>");
	scanf("%d",&numero);
	printf("\n");
	if(numero <= 1 || numero >= 9){
		printf("Erro: Valor digitado invalido!");
		return 1;
	}
	for(i = 0; i <= 9; i++){
		resultado = numero * i;
		printf("%d x %d = %d.\n", numero, i, resultado);
	}
}
