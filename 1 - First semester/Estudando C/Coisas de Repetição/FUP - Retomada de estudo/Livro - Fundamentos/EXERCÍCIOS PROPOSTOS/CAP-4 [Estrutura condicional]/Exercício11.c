#include <stdio.h>

int main(){
	
	float salario,
		salarioNovo;
		
	printf("Entre com o salario atual de um funcionario: ");
	scanf("%f",&salario);
	
	if(salario <= 300){
		salarioNovo = salario + salario * 15 / 100;
	}
	else if(salario > 300 && salario < 600){
		salarioNovo = salario + salario * 10 / 100;
	}
	else if(salario >= 600 && salario <= 900){
		salarioNovo = salario + salario * 5 / 100;
	}
	else if(salario > 900){
		salarioNovo = salario;
	}
	
	printf("Novo salario = %.f.\n",salarioNovo);
return 0;
}
