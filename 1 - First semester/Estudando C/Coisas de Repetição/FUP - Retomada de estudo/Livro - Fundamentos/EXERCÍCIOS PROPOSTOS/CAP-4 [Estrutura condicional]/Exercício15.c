#include <stdio.h>

int main(){
	
	int opcao;
	float valor;
	
	puts("1. Poupanca.");
	puts("2. Fudos de Renda fixa.");
	printf("Entre com a opcao desejada: ");
	scanf("%d",&opcao);
	
	if(opcao < 1 || opcao > 2){
		printf("Erro: voce entrou com um opcao nao valida.");
		return 1;	
	}
	
	printf("Entre com o 'valor' do investimento: ");
	scanf("%f",&valor);
	
	if(opcao == 1) valor = valor + valor * 3 / 100;
	else if(opcao == 2) valor = valor + valor * 4 / 100;
	
	printf("O valor corrigido e: %.2f.\n",valor);
		
return 0;
}
