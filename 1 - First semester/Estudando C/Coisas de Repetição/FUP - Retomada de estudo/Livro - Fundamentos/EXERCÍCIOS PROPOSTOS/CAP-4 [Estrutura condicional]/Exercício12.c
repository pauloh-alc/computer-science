#include <stdio.h>

int main(){
	
	float salario;
	
	printf("Entre com o salario bruto de um funcionario: ");
	scanf("%f",&salario);
	
	if(salario <= 350){
		salario = salario + 100 - salario * 7 / 100;
	}
	else if(salario > 350 && salario < 600){
		salario = salario + 75 - salario * 7 / 100;
	}
	else if(salario >= 600 && salario <= 900){
		salario = salario + 50 - salario * 7 / 100;
	}
	else if(salario > 900){
		salario = salario + 35 - salario * 7 / 100;
	}
	
	printf("Salario a receber = %.2f.\n",salario);
return 0;
}

