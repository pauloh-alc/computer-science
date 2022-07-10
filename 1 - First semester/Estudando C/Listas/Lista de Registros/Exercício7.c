#include <stdio.h>
#include <string.h>
#define TAM 2

// Estrutura  do tipo eletrodomestico, com os campos: nome, potência e tempo ativo por mês. 
typedef struct {
	char nome[30];
	int potencia;
	int tempo;
} eletrodomestico;
	
	// Procedimento: exibe o menu de navegação 
	void menu () 
	{
		printf("\n");
		puts("[0]. SAIR.");
		puts("[1]. CADASTRAR.");
		puts("[2]. CONSUMO TOTAL NA CASA.");
		puts("[3]. CONSUMO DE CADA ELETRODOMESTICO.");
		printf("\n");
	}
	
	// Procedimento: realiza o cadastro de 5 eletrodomesticos de uma casa.
	void cadastroMoveis (eletrodomestico moveis[], int* qtd_dias)
	{
		int i;
		
		for (i = 0; i < TAM; i++) {
			
			fflush(stdin);
			printf("Eletrodomestico %d: \n",i);
			printf("Nome: ");
			scanf("%[^\n]s",moveis[i].nome);
			
			fflush(stdin);
			printf("Pontencia em Kw: ");
			scanf("%d",&moveis[i].potencia);
			
			fflush(stdin);
			printf("Tempo ativo p/dia: ");
			scanf("%d",&moveis[i].tempo);
			
			printf("\n");
		}
		
		printf("Entre com uma quantidade de dias: ");
		scanf("%d",qtd_dias);
	}
	
	// Função: devolve o total do consumo relativo a todos os eletrodomésticos.
	int consumoTotal (eletrodomestico moveis[], int dias)
	{
		int i, total = 0;
		
		for (i = 0; i < TAM; i++) {
			total = total + (moveis[i].potencia * moveis[i].tempo * dias);
		}
	
	return total;
	}
	
	// Procedimento: mostra o consumo individual de algum eletrodomestico.
	void cadaEletrodomestico (eletrodomestico moveis[], int dias) 
	{
		int i, consumoIndividual;
		char buscar_nome[30];
		
		fflush(stdin);
		printf("Entre com o 'nome' do eletrodomestico que voce deseja saber o consumo: ");
		scanf("%[^\n]s",buscar_nome);
		
		for (i = 0; i < TAM; i++) {
			if (strcmp (moveis[i].nome, buscar_nome) == 0) {
				consumoIndividual = moveis[i].potencia * moveis[i].tempo * dias;
				printf("Nome: %s [Potencia: %d, Tempo ativo p/dia: %d e Consumo por mes: %d]\n",
																								moveis[i].nome, 
																								moveis[i].potencia, 
																								moveis[i].tempo,
																								consumoIndividual);
				break;
			}
		}
	}
// Função Principal:
int main ()
{
	eletrodomestico moveis[TAM];
	int opcao, dias = 0;
	
	while (!0) {
		menu ();
		printf("Entre com sua opcao: "); scanf("%d",&opcao);
		if (!opcao) break;
		
		switch (opcao) {
			case 1:{
				cadastroMoveis (moveis, &dias);
				break;
			}
			case 2:{
				int total = consumoTotal (moveis, dias);
				printf("Total de consumo e: %d",total);
				break;
			}
			case 3:{
				cadaEletrodomestico (moveis, dias);
				break;
			}
		}
	}
	return 0;
}
