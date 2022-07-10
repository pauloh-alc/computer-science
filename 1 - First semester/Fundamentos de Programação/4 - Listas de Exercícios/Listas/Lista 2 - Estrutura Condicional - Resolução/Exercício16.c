#include <stdio.h>

int main(){
	// Exercício 16 - 
	
	int numeroDependentes;
	float salarioBase, salarioBruto, impostoRenda, salarioLiquido, salarioReceber;
	
	printf("Entre com o valor de seu salario base >>> ");
	scanf("%f",&salarioBase);
	printf("Entre com o numero de dependentes >>> ");
	scanf("%d",&numeroDependentes);
	
	salarioBruto = salarioBase + numeroDependentes * 120;
	
	if(salarioBruto < 1000){
		printf("Isento de Imposto.\n");
	}
	else if(salarioBruto > 1000 && salarioBruto <= 2500 ){
		impostoRenda = salarioBruto * 10.0 / 100;
	}
	else if(salarioBruto > 2500){
		impostoRenda = salarioBruto * 20.0 / 100;
	}
	
	salarioLiquido = salarioBruto - impostoRenda;
	
	
	if(salarioLiquido < 1750){
		salarioReceber = salarioLiquido + 500;
	}
	else if(salarioLiquido > 1750){
		salarioReceber = salarioLiquido + 250;
	}
	
	printf("Salario Base = %.1f\n", salarioBase);
	printf("Salario Bruto = %.1f\n", salarioBruto);
	printf("Imposto de Renda = %.1f\n", impostoRenda);
	printf("Salario Liquido = %.1f\n", salarioLiquido);
	printf("Salario a Receber = %.1f\n", salarioReceber);
return 0;
}
