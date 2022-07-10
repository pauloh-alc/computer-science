#include <stdio.h>

int main(){
	int anoAtual,
		salarioInicial,
		i;
	
	float aumento,
		salario;
		
	printf("Entre com o 'ano atual': ");
	scanf("%d",&anoAtual);
	
	salarioInicial = 1000;
	aumento = 1.5;
	salario = salarioInicial;
	
	for(i = 2005; i < anoAtual; i++){
		salario = salario + salario * aumento / 100;
		aumento = aumento * 2;
	}
	printf("Salario atual = %f.\n",salario);
return 0;
}
