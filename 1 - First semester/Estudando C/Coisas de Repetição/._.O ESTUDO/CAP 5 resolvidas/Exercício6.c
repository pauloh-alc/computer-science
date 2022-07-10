#include <stdio.h>
#define salarioMinimo 450.0

int main(){
	// Exercício resolvidos - 6
	int i;
	int codigoFuncionario, horasTrabalhadas;
	char turno, categoria;
	float valorHoraTrabalhada, salarioInicial, auxilioAlimentacao, salarioFinal;

	for(i = 1; i <= 10; i++){
		
		printf("Entre com o 'codigo' do funcionario %d >>>",i);
		scanf("%d%*c",&codigoFuncionario);
		
		printf("Entre com o 'numero de horas trabalhadas no mes' do funcionario %d >>>",i);
		scanf("%d%*c",&horasTrabalhadas);
		
		do{
			printf("Entre com o 'turno de trabalho' [M - matutino; V - vespertino; N - noturno] do funcionario %d >>>",i);
			scanf("%c%*c",&turno);
			
			if(turno != 'M' && turno != 'V' && turno != 'N'){
			printf("Erro: voce digitou um 'turno' invalido, digite novamente. \n");
			}
		}while(turno != 'M' && turno != 'V' && turno != 'N');
		
		do{
			printf("Entre com a 'categoria' [O - operario;  G - gerente] do funcionario %d >>>",i);
			scanf("%c%*c",&categoria);
			
			if(categoria != 'O' && categoria != 'G'){
			printf("Erro: voce digitou uma 'categoria' invalida, digite novamente. \n");
			}
		}while(categoria != 'O' && categoria != 'G');
			
		printf("\n");
		
		if(categoria == 'G' && turno == 'N') valorHoraTrabalhada = salarioMinimo * 18.0 / 100.0;
		else if(categoria == 'G' && (turno == 'M' || turno == 'V')) valorHoraTrabalhada = salarioMinimo * 15.0 / 100.0;
		else if(categoria == 'O' && turno == 'N') valorHoraTrabalhada = salarioMinimo * 13.0 / 100.0;
		else if(categoria == 'O' && (turno == 'M' || turno == 'V')) valorHoraTrabalhada = salarioMinimo * 10.0 / 100.0;
		
		salarioInicial = horasTrabalhadas * valorHoraTrabalhada;
		
		if(salarioInicial <= 300){
			auxilioAlimentacao = salarioInicial * 20.0 / 100.0;
		}
		else if(salarioInicial > 300 && salarioInicial < 600){
			auxilioAlimentacao = salarioInicial * 15.0 / 100.0;
		}
		else if(salarioInicial > 600){
			auxilioAlimentacao = salarioInicial * 5.0 / 100.0;
		}
		
		salarioFinal = salarioInicial + auxilioAlimentacao;
	
		printf("Funionario %d - codigo >>> %d. \n",i, codigoFuncionario);
		printf("             - numero de horas trabalhadas >>> %d. \n", horasTrabalhadas);
		printf("             - valor da horas trabalhada >>> %.2f. \n", valorHoraTrabalhada);
		printf("             - salario inicial >>> %.2f. \n", salarioInicial);
		printf("             - auxilio alimentacao >>> %.2f. \n", auxilioAlimentacao);
		printf("             - salario final >>> %.2f. \n", salarioFinal);
		printf("\n");
	}
	
return 0;	
}

