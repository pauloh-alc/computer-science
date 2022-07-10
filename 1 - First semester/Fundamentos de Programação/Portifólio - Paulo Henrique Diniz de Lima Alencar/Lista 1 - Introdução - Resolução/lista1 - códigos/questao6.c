#include <stdio.h>

int main(){
	// Descrição: 6° - Leia um número inteiro e imprima o seu antecessor e seu sucessor.
	// Dados de entrada: número inteiro.
	// Dados de saída: antecessor e sucessor.
	
	int numero, antecessor, sucessor;
	
	printf("\tMostra o antecessor de um numero e o sucessor:\n");
	
	printf("\tUsuario, entre com um numero inteiro >>");
		scanf("%d",&numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	printf("\n\n");

	printf("O antecessor do numero %d eh %d.\n", numero, antecessor);
	printf("O sucessor do numero %d eh %d.\n", numero, sucessor);

	return 0;
}