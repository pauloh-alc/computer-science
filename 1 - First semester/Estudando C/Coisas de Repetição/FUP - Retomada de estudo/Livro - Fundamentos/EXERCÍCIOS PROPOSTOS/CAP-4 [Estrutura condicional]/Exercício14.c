#include <stdio.h>

int main(){
	
	float salario;
	
	printf("Entre com um 'salario' de um funcionario: ");
	scanf("%f",&salario);
	
	if(salario <= 300) salario = salario + salario * 50 / 100;
	else if(salario > 300 && salario <= 500) salario = salario + salario * 40 / 100;
	else if(salario > 500 && salario <= 700) salario = salario + salario * 30 / 100;
	else if(salario > 70 && salario <= 800) salario = salario + salario * 20 / 100;
	else if(salario > 800 && salario <= 1000) salario = salario + salario * 10 / 100;
	else if(salario > 1000) salario = salario + salario * 5 / 100;
	
	printf("Novo salario = %.2f.\n",salario);
	
return 0;
}
