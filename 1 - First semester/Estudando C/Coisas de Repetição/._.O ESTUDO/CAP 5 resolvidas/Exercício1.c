#include <stdio.h>

int main(){
	// Exercício resolvidos - 1
	int salario,i, dataAtual;
	float taxa, novoSalario;
	
	salario = 1000;
	novoSalario = salario + salario * 1.5 / 100.0;
	dataAtual;
	taxa = 1.5;
	
	printf("Entre com a data o ano atual >>>");
	scanf("%d",&dataAtual);
		
	i = 0;
	while(i <= dataAtual - 2007){
		taxa = taxa * 2;
		novoSalario = novoSalario + novoSalario * taxa / 100.0;
		i++;
	}
	printf("Novo salario do funcionario corresponde a [%.2f].\n", novoSalario);
return 0;
}
