#include <stdio.h>
# define tamanhoString 11 
int main(){
	// Dicionário de dados:
	float vendas[12][4];
	int i,j;
	float vendaMes[12]; 						// Armazena o total de vendas de cada mês do ano.
	float totalMes, totalAno;					// totalMes é responsável por armazenar temporariamente o total de vendas realizado em cada mês.
												// totalAno se encarrega de armazenar o total de vendas nos 12 meses do ano.
	char meses[12][tamanhoString] = {"Janeiro",
								   "Fevereiro",
								   "Marco",
								   "Abril",
								   "Maio",
								   "Junho",
								   "Julho",
								   "Agosto",
								   "Setembro",
								   "Outubro",
								   "Novembro",
								   "Dezembro"}; // Matriz bidimencional [12][tamanhoString], possuindo 12 linhas e podendo armazenar uma string de no máximo
								   				// 10 caracteres.
								   				
	// Entrada e processamento de dados:
	totalAno = 0;
	for (i = 0; i < 12; i++) {
		totalMes = 0;
		printf("\n");
		printf("[Mes %d] \n",i + 1);
		for(j = 0; j < 4; j++) {
			printf("Semana %d: ",j + 1);
			scanf("%f",&vendas[i][j]);
			totalMes += vendas[i][j]; 		// Calculando o total vendido em '1 mês', isto é, 4 semanas.
		}
		vendaMes[i] = totalMes;				// Realizando o armazenamento do total de vendas de cada mês em um vetor com 12 posições.
		totalAno += vendaMes[i];			// Calculando o tatal vendido por ano.
	}
	
	// Saída de dados:
	printf("\n");
	for(i = 0; i < 12; i++) {
		printf("O mes de '%s' teve um total vendido de R$ %.2f. \n",meses[i],vendaMes[i]);
	}
	printf("\nO total vendido pela loja no ano foi R$ %.2f. \n",totalAno);

return 0;
}
