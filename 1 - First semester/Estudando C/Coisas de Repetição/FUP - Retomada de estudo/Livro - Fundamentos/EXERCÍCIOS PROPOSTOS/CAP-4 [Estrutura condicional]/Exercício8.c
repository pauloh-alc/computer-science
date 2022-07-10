#include <stdio.h>

int main(){
	float salario;
	
	printf("Entre com o 'salario' de um funcionario: ");
	scanf("%f",&salario);
	
	if(salario <= 300){
		salario = salario + salario * 35.0 / 100;
		printf("Salario com ajuste de 35%% fica: %.2f.\n",salario);
	}
	else{
		salario = salario + salario * 15.0 / 100;
		printf("Salario com ajuste de 15%% fica: %.2f.\n",salario);
	}
return 0;
}
