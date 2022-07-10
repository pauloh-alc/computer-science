#include <stdio.h>

int main(){
	// Exercício resolvidos - 16
	int base, altura;
	float area;
	
	do{
		printf("Entre com a 'base' do triangulo >>> ");
		scanf("%d",&base);	
		if(base <= 0) printf("Erro: nao e permitido a entrada de valores menores ou igual a 0.\n");
	}while(base <= 0);
	
	do{
		printf("Entre com a 'altura' do triangulo >>> ");
		scanf("%d",&altura);	
		if(altura <= 0) printf("Erro: nao e permitido a entrada de valores menores ou igual a 0.\n");
	}while(altura <= 0);
	
	area = (base * altura) / 2.0;
	printf("Area = %.2f. \n",area);
}
