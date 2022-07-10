#include <stdio.h>

int main(){
	
	float salario;
	
	printf("Entre com o 'valor' do seu salario funcionario: ");
	scanf("%f",&salario);
	
	if(salario < 500){
		salario = salario + salario * 30.0 / 100;
		printf("Seu salario foi ajustado para >> %.3f.\n",salario);
	}
	else{
		printf("Erro: ajuste permitido somente para funcionarios com salarios abaixo de 500 !!.\n");
	}
return 0;
}
