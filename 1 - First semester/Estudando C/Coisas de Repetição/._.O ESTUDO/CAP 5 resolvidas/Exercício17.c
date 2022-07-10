#include <stdio.h>

int main(){
	// Exercício resolvidos - 16
	float salarioCarlos, salarioJoao;
	float investimentoCarlos, investimentoJoao;
	int meses;
	
	printf("Entre com o 'salario' de Carlos >>> ");
	scanf("%f",&salarioCarlos);
	
	salarioJoao = salarioCarlos / 3.0;
	
	investimentoCarlos = salarioCarlos;
	investimentoJoao = salarioJoao;
	
	meses = 0;
	while(investimentoJoao < investimentoCarlos){
		
		investimentoCarlos += investimentoCarlos * 2.0 / 100.0;
		investimentoJoao += investimentoJoao * 5.0 / 100.0;
		meses++;
	}
	
	// so para conferir.
	printf("investimento atual de Carlos = %f. \n", investimentoCarlos); 
	printf("investimento atual de Joao = %f. \n", investimentoJoao);
	
	printf("A quantidade de meses necessarias para o valor de Joao se igualar ou utrapassar e >>> %d.\n", meses);
return 0;
}
