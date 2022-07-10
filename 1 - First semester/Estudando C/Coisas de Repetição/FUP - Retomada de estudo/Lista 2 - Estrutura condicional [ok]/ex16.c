#include <stdio.h>

int main(){
	int salarioBase,
		dependentes;
		
	float salarioBruto,
		salarioLiquido,
		salarioReceber;
	
	printf("Entre com o valor do 'salario base': ");
	scanf("%d",&salarioBase);
	printf("Entre com o numero de 'dependentes' do funcionario: ");
	scanf("%d",&dependentes);
	
	salarioBruto = salarioBase + dependentes * 120;
	printf("Salario Bruto >> %.2f.\n", salarioBruto);
	
	if(salarioBruto < 1000){
		salarioLiquido = salarioBruto; 
	}
	else if(salarioBruto >= 1000 && salarioBruto <= 2500){
		salarioLiquido = salarioBruto - salarioBruto * 10.0 / 100;
	}
	else if(salarioBruto > 2500){
		salarioLiquido = salarioBruto - salarioBruto * 20.0 / 100;
	}
	
	printf("Salario Liquido >> %.2f.\n", salarioLiquido);
	
	if(salarioLiquido <= 1750){
		salarioReceber = salarioLiquido + 500;
	}
	else if(salarioLiquido > 1750){
		salarioReceber = salarioLiquido + 250;
	}
	
	printf("Salario a receber >> %.2f.\n", salarioReceber);
	
return 0;
}
