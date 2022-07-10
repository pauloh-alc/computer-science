#include <stdio.h>
#define salarioMinimo 500.0

int main(){
	// Exercício resolvidos - 12
	
	int operarios;
	
	int numeroOperario, numeroPecas;
	char sexo;
	int numeroTotalPecas, somaPecaHomens, somaPecaMulheres, contHomens, contMulheres, numeroMaiorSalario; 
	float salario, totalFolhaPagamento, mediaHomens, mediaMulheres, maiorSalario;
	
	totalFolhaPagamento = 0;
	numeroTotalPecas = 0;
	somaPecaHomens = 0;
	somaPecaMulheres = 0;
	contHomens = 0;
	contMulheres = 0;
	
	for(operarios = 1; operarios <= 15; operarios++){
		
		printf("Entre com o 'numero do operario' [%d] >>>",operarios);
		scanf("%d%*c",&numeroOperario);
		printf("Entre com o 'numero de pecas fabricadas no mes' pelo operario [%d] >>>",operarios);
		scanf("%d%*c",&numeroPecas);
		
		do{
			printf("Entre com o 'sexo'[H - masculino; F - feminino] do operario [%d] >>>",operarios);
			scanf("%c%*c",&sexo);
			if(sexo != 'H' && sexo != 'F') printf("Erro: voce digitou um sexo invalido. \n");
			
		}while(sexo != 'H' && sexo != 'F');
		
		
		if(numeroPecas <= 30) salario = salarioMinimo;
		else if(numeroPecas > 30 && numeroPecas <= 50) salario = salarioMinimo + ((salarioMinimo * 3.0 / 100.0) * (numeroPecas - 30));
		else if(numeroPecas > 50)  salario = salarioMinimo + ((salarioMinimo * 5.0 / 100.0) * (numeroPecas - 30));
		
		if(operarios == 1){
			maiorSalario = salario;
			numeroMaiorSalario = numeroOperario;
		}
		if(salario > maiorSalario){
			maiorSalario = salario;
			numeroMaiorSalario = numeroOperario;	
		} 
		
		printf("O 'numero do operario' [%d] >>> %d. \n", operarios, numeroOperario);
		printf("O 'salario' do operario [%d] >>> %.2f. \n", operarios, salario);
		
		totalFolhaPagamento = totalFolhaPagamento + salario;
		numeroTotalPecas = numeroTotalPecas + numeroPecas;
		
		if(sexo == 'H'){
			somaPecaHomens += numeroPecas;
			contHomens++;
		} 
		else{
			somaPecaMulheres += numeroPecas;
			contMulheres++;
		}
		printf("\n");
	}
	
	mediaHomens = somaPecaHomens / contHomens;
	mediaMulheres = somaPecaMulheres / contMulheres;
	
	printf("\n\n");
	printf("\t Informacoes Gerais\n\n");
	printf("O total da folha de pagamento da 'empresa' >>> %.2f. \n", totalFolhaPagamento);
	printf("O numero total de pecas fabricadas no mes na 'empresa' >>> %d. \n", numeroTotalPecas);
	printf("A media de pecas fabricadas pelos 'Homens' >>> %.2f. \n", mediaHomens);
	printf("A media de pecas fabricadas pelas 'Mulheres' >>> %.2f. \n", mediaMulheres);
	printf("O operario com maior salario possui 'numero' >>> %d. \n", numeroMaiorSalario);
return 0;
}
