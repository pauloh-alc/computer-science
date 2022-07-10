// Ciência da Computação 2020.1.
// Nome - Paulo Henrique Diniz de Lima Alencar.
// Matrícula - 494837.
// Trabalho 1 - Batalha de HearthStone
#include <stdio.h>
#include <string.h> 
					
int main(){
// Dicionário de dados:

	// Heroi 1:
		char nome_heroi1[20]; 
		int heroi1_vida;
		// Lacaio 1:
			char nome_lacaio1[20];
			int lacaio1_ataque;
			int lacaio1_vida;
		// Lacaio 2:
			char nome_lacaio2[20];
			int lacaio2_ataque;
			int lacaio2_vida;
		
	// Heroi 2:
		char nome_heroi2[20]; 
		int heroi2_vida;
		// Lacaio 3:
			char nome_lacaio3[20];
			int lacaio3_ataque;
			int lacaio3_vida;
		// Lacaio 4:
			char nome_lacaio4[20];
			int lacaio4_ataque;
			int lacaio4_vida;
			
	// Variáveis auxiliares:
		char adversario[20];
		char lacaio[20];
		char opcao[20];
		int ataque,
			mostrar = 0;
		
// Fim do Dicionário de dados.
	
// Começo do programa (Entrada de dados).
	puts("\n\t-------------------- JOGO - HearthStone --------------------");
	puts("\n\t--------------------     BEM VINDO      --------------------");

	puts("\n ------ Entre com os dados da batalha ------");
	
	// Dados do 'Primeiro' Heroi:
	puts("\n > Passo numero 1: Dados do 'HEROI 1'.");
	printf("\n HEROI 1 - Nome >>> ",nome_heroi1);
	gets(nome_heroi1);
	do{
		printf("\n HEROI 1 - %s - Pontos de Vida >>> ",nome_heroi1);
		scanf("%d",&heroi1_vida); getchar();
		if(heroi1_vida <= 0 || heroi1_vida > 30){
			printf("\n Erro: pontos de vida dos herois nao podem ser 'maiores que 30' ou valores 'negativos' !!\n");	
		} 	
	}while(heroi1_vida <= 0 || heroi1_vida > 30);
	
	printf("\n > Passo numero 2: Dados de 2 Lacaios do HEROI - %s. ",nome_heroi1);
	// Dodos do Lacaio 1:
	printf("\n\n Lacaio 1, de %s - Nome >>> ",nome_heroi1);
	gets(nome_lacaio1);
	do{
		printf("\n Lacaio 1 - %s - Pontos de Vida >>> ",nome_lacaio1);
		scanf("%d",&lacaio1_vida); getchar();
		printf(" Lacaio 1 - %s - Pontos de Ataque >>> ",nome_lacaio1);
		scanf("%d",&lacaio1_ataque); getchar();
		if(lacaio1_vida <= 0 || lacaio1_vida > 10 || lacaio1_ataque <= 0 || lacaio1_ataque > 10){
			printf("\n Erro: pontos de vida ou de ataque dos lacaios nao podem ser 'menores ou iguais a zero' ou 'maiores que 10' !!\n");	
		}
	}while(lacaio1_vida <= 0 || lacaio1_vida > 10 || lacaio1_ataque <= 0 || lacaio1_ataque > 10);
	
	// Dodos do Lacaio 2:
	printf("\n\n Lacaio 2, de %s - Nome >>> ",nome_heroi1);
	gets(nome_lacaio2);
	do{
		printf("\n Lacaio 2 - %s - Pontos de Vida >>> ",nome_lacaio2);
		scanf("%d",&lacaio2_vida); getchar();
		printf(" Lacaio 2 - %s - Pontos de Ataque >>> ",nome_lacaio2);
		scanf("%d",&lacaio2_ataque); getchar();
		if(lacaio2_vida <= 0 || lacaio2_vida > 10 || lacaio2_ataque <= 0 || lacaio2_ataque > 10){
			printf("\n Erro: pontos de vida ou de ataque dos lacaios nao podem ser 'menores ou iguais a zero' ou 'maiores que 10' !!\n");
		} 
	}while(lacaio2_vida <= 0 || lacaio2_vida > 10 || lacaio2_ataque <= 0 || lacaio2_ataque > 10);
	
	// Dados do 'Segundo' Herói:
	puts("\n > Passo numero 3: Dados do 'HEROI 2'.");
	printf("\n HEROI 2 - Nome >>> ",nome_heroi2);
	gets(nome_heroi2);
	do{
		printf("\n HEROI 2 - %s - Pontos de Vida >>> ",nome_heroi2);
		scanf("%d",&heroi2_vida); getchar();
		if(heroi2_vida <= 0 || heroi2_vida > 30){
			printf("\n Erro: pontos de vida dos herois nao podem ser 'maiores que 30' ou valores 'negativos' !!\n");	
		} 	
	}while(heroi2_vida <= 0 || heroi2_vida > 30);
	
	printf("\n > Passo numero 4: Dados de 2 Lacaios do HEROI - %s. ",nome_heroi2);
	// Dodos do Lacaio 3:
	printf("\n\n Lacaio 3, de %s - Nome >>> ",nome_heroi2);
	gets(nome_lacaio3);
	do{
		printf("\n Lacaio 3 - %s - Pontos de Vida >>> ",nome_lacaio3);
		scanf("%d",&lacaio3_vida); getchar();
		printf(" Lacaio 3 - %s - Pontos de Ataque >>> ",nome_lacaio3);
		scanf("%d",&lacaio3_ataque); getchar();
		if(lacaio3_vida <= 0 || lacaio3_vida > 10 || lacaio3_ataque <= 0 || lacaio3_ataque > 10){
			printf("\n Erro: pontos de vida ou de ataque dos lacaios nao podem ser 'menores que zero' ou 'maiores que 10' !!\n");
		}
	}while(lacaio3_vida <= 0 || lacaio3_vida > 10 || lacaio3_ataque <= 0 || lacaio3_ataque > 10);
	
	// Dodos do Lacaio 4:
	printf("\n\n Lacaio 4, de %s - Nome >>> ",nome_heroi2);
	gets(nome_lacaio4);
	do{
		printf("\n Lacaio 4 - %s - Pontos de Vida >>> ",nome_lacaio4);
		scanf("%d",&lacaio4_vida); getchar();
		printf(" Lacaio 4 - %s - Pontos de Ataque >>> ",nome_lacaio4);
		scanf("%d",&lacaio4_ataque); getchar();
		if(lacaio4_vida <= 0 || lacaio4_vida > 10 || lacaio4_ataque <= 0 || lacaio4_ataque > 10){
			printf("\n Erro: pontos de vida ou de ataque dos lacaios nao podem ser 'menores ou iguais a zero' ou 'maiores que 10' !!\n");
		}
	}while(lacaio4_vida <= 0 || lacaio4_vida > 10 || lacaio4_ataque <= 0 || lacaio4_ataque > 10);
	
	do{
		printf("\n\n--- Com qual 'Heroi' voce deseja jogar? --- \n\n");
		printf("- COM HEROI %s, digite o nome do 'heroi' corretamente.\n",nome_heroi1);
		printf("- COM HEROI %s, digite o nome do 'heroi' corretamente.",nome_heroi2);
		printf("\n\n  Entre com o 'nome' do Heroi desejado >>> ");
		gets(opcao);
// Fim da Entrada de dados.	

// Escolha de algum HERÓI:
	
	// CASO O USUÁRIO ESCOLHA O HERÓI 1: 
		if(strcmp(opcao,nome_heroi1) == 0){ // função 'strcmp' para comparar cadeia de caracteres (Utilizada com o intituito de verificar se o heroi escolhido pelo usuário é igual ao cadastrado no vetor do tipo char ) 
			printf("\nVoce escolheu o Heroi - %s. \n",nome_heroi1);
			printf("Hora do Ataque !\n\n");
			do{
			printf("Escolha um dos seus Lacaios [%s ou %s] digitando o 'nome' corretamente: ",nome_lacaio1,nome_lacaio2);
			gets(lacaio);
			
			// Utilização de uma variável 'ataque' para armazenar os valores do ataque de um dos dois Lacaios.
				if(strcmp(lacaio,nome_lacaio1) == 0){
					ataque = lacaio1_ataque;
				}
				else if(strcmp(lacaio,nome_lacaio2) == 0){
					ataque = lacaio2_ataque;	
				}
				else{
					printf("Erro: 'lacaio' digitado invalido, digite o nome do Lacaio que pertenca ao seu time !!\n");
				}
			}while(strcmp(lacaio,nome_lacaio1) != 0 && strcmp(lacaio,nome_lacaio2) != 0);
			
			// Escolha do 'Adversário':
			do{
				printf("\nEscolha o adversario que voce deseja atacar digitando o 'nome' que esta dentro dos [ ]:\n");
				printf("Heroi - [%s];  Lacaio - [%s]  ou  Lacaio - [%s] : ",nome_heroi2,nome_lacaio3,nome_lacaio4);
				gets(adversario);
				if(strcmp(adversario,nome_heroi2) != 0 && strcmp(adversario,nome_lacaio3) != 0 && strcmp(adversario,nome_lacaio4) != 0){
					printf("Erro: 'adversario' digitado invalido, digite novamente abaixo !!\n");	
				} 
			}while(strcmp(adversario,nome_heroi2) != 0 && strcmp(adversario,nome_lacaio3) != 0 && strcmp(adversario,nome_lacaio4) != 0);
		
		if(strcmp(adversario,nome_heroi2) == 0){ // Se o adversário escolhido for Herói 2.
			heroi2_vida = heroi2_vida - ataque; // Removendo vida do HERÓI, após o ataque de algum dos Lacaios
				
			// Status da Arena - Caso o Heroi 2 morra, isto é, vida menor ou igual a ZERO.
			if(heroi2_vida <= 0){
				printf("\n  ---- Status da Arena ----\n\n");
				mostrar = 1;
				printf("\nHeroi 2 - %s - morreu !\n\n",nome_heroi2);
				
				printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
				printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
				printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
				printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
				printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
				
				printf("\n\n");
				
				printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
				printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
				printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
				printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);
			}
		}
			// Lacaio 1 X Lacaio 3:
			else if(strcmp(lacaio,nome_lacaio1) == 0 && strcmp(adversario,nome_lacaio3) == 0){
				lacaio3_vida = lacaio3_vida - ataque; // Removendo vida do Lacaio 3 (sofreu o ataque), após o ataque do Lacaio 1 (realizou o ataque).
				lacaio1_vida = lacaio1_vida - lacaio3_ataque; // Removendo vida do Lacaio 1 (realizou o ataque) baseado no ataque do Lacaio 3 (sofreu o ataque).
				// OBS: Abaixo foram criadas algumas codições caso UM ou AMBOS os lacaios venham a morrer durante o ataque, para escrever o status da arena corretamente.
			
				// Status da Arena - Caso Ambos os Lacaios morram:
				if(lacaio1_vida <= 0 && lacaio3_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 3 - %s - morreu !\n",nome_lacaio3);
					printf("\nLacaio 1 - %s - morreu !\n\n",nome_lacaio1);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);			
				}
				// Status da Arena - Caso somente o Lacaio 1 morra:
				else if(lacaio1_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 1 - %s - morreu !\n\n",nome_lacaio1);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
				// Status da Arena - Caso somente o Lacaio 3 morra:
				else if(lacaio3_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 3 - %s - morreu !\n\n",nome_lacaio3);
				
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
			}
			// Lacaio 1 X Lacaio 4:
			else if(strcmp(lacaio,nome_lacaio1) == 0 && strcmp(adversario,nome_lacaio4) == 0){
				lacaio4_vida = lacaio4_vida - ataque;
				lacaio1_vida = lacaio1_vida - lacaio4_ataque;
				// Status da Arena - Caso Ambos os Lacaios morram:
				if(lacaio1_vida <= 0 && lacaio4_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 4 - %s - morreu !\n",nome_lacaio4);
					printf("\nLacaio 1 - %s - morreu !\n\n",nome_lacaio1);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
				}
				// Status da Arena - Caso somente o Lacaio 1 morra:
				else if(lacaio1_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 1 - %s - morreu !\n\n",nome_lacaio1);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
				// Status da Arena - Caso somente o Lacaio 4 morra:
				else if(lacaio4_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 4 - %s - morreu !\n\n",nome_lacaio4);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);		
				}
			}
			// Lacaio 2 X Lacaio 3:
			else if(strcmp(lacaio,nome_lacaio2) == 0 && strcmp(adversario,nome_lacaio3) == 0){
				lacaio3_vida = lacaio3_vida - ataque;
				lacaio2_vida = lacaio2_vida - lacaio3_ataque;
				// Status da Arena - Caso Ambos os Lacaios morram:
				if(lacaio2_vida <= 0 && lacaio3_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 3 - %s - morreu !\n",nome_lacaio3);
					printf("\nLacaio 2 - %s - morreu !\n\n",nome_lacaio2);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
				// Status da Arena - Caso somente o Lacaio 2 morra:
				else if(lacaio2_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 2 - %s - morreu !\n\n",nome_lacaio2);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);
				}
				// Status da Arena - Caso somente o Lacaio 3 morra:
				else if(lacaio3_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 3 - %s - morreu !\n\n",nome_lacaio3);
				
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
			}
			// Lacaio 2 X Lacaio 4:
			else if(strcmp(lacaio,nome_lacaio2) == 0 && strcmp(adversario,nome_lacaio4) == 0){
				lacaio4_vida = lacaio4_vida - ataque;
				lacaio2_vida = lacaio2_vida - lacaio4_ataque;
				// Status da Arena - Caso Ambos os Lacaios morram:
				if(lacaio2_vida <= 0 && lacaio4_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 4 - %s - morreu !\n",nome_lacaio4);
					printf("\nLacaio 2 - %s - morreu !\n\n",nome_lacaio2);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
				
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);	
				}
				// Status da Arena - Caso somente o Lacaio 2 morra:
				else if(lacaio2_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 2 - %s - morreu !\n\n",nome_lacaio2);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);
				}
				// Status da Arena - Caso somente o Lacaio 4 morra:
				else if(lacaio4_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 4 - %s - morreu !\n",nome_lacaio4);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
				}
			}
		}
	// CASO O USUÁRIO ESCOLHA O HERÓI 2: 
		else if(strcmp(opcao,nome_heroi2) == 0){
			printf("\nVoce escolheu o Heroi - %s. \n",nome_heroi2);
			printf("Hora do Ataque !\n\n");
			do{
			printf("Escolha um dos seus Lacaios [%s ou %s] digitando o 'nome' corretamente: ",nome_lacaio3,nome_lacaio4);
			gets(lacaio);
			
			// Utilização de uma variável 'ataque' para armazenar os valores do ataque de um dos dois Lacaios.
				if(strcmp(lacaio,nome_lacaio3) == 0){
					ataque = lacaio3_ataque;
				}
				else if(strcmp(lacaio,nome_lacaio4) == 0){
					ataque = lacaio4_ataque;	
				}
				else{
					printf(" Erro: 'lacaio' digitado invalido, digite o nome do Lacaio que pertenca ao seu time !!\n");
				}
			}while(strcmp(lacaio,nome_lacaio3) != 0 && strcmp(lacaio,nome_lacaio4) != 0);
			
			// Escolha do 'Adversário':
			do{
				printf("\nEscolha o adversario que voce deseja atacar digitando o 'nome' que esta dentro dos [ ]:\n");
				printf("Heroi - [%s];  Lacaio - [%s]  ou  Lacaio - [%s] : ",nome_heroi1,nome_lacaio1,nome_lacaio2);
				gets(adversario);
				if(strcmp(adversario,nome_heroi1) != 0 && strcmp(adversario,nome_lacaio1) != 0 && strcmp(adversario,nome_lacaio2) != 0){
					printf(" Erro: 'adversario' digitado invalido, digite novamente abaixo !!\n");
				} 
			}while(strcmp(adversario,nome_heroi1) != 0 && strcmp(adversario,nome_lacaio1) != 0 && strcmp(adversario,nome_lacaio2) != 0);
			
			if(strcmp(adversario,nome_heroi1) == 0){ // Se o adversário escolhido for Herói 1.
			heroi1_vida = heroi1_vida - ataque; // Removendo vida do HERÓI, após o ataque de algum dos Lacaios
				
			// Status da Arena - Caso o Heroi 1 morra, isto é, vida menor ou igual a ZERO.
				if(heroi1_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nHeroi 1 - %s - morreu !\n\n",nome_heroi1);
					
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);
				}
			}
			
			// Lacaio 3 X Lacaio 1:
			else if(strcmp(lacaio,nome_lacaio3) == 0 && strcmp(adversario,nome_lacaio1) == 0){
				lacaio1_vida = lacaio1_vida - ataque; // Removendo vida do Lacaio 1 (sofreu o ataque), após o ataque do Lacaio 3 (realizou o ataque).
				lacaio3_vida = lacaio3_vida - lacaio1_ataque; // Removendo vida do Lacaio 3 (realizou o ataque) baseado no ataque do Lacaio 1 (sofreu o ataque).
				// OBS: Abaixo foram criadas algumas codições caso UM ou AMBOS os lacaios venham a morrer durante o ataque, para escrever o Status da Arena corretamente.
				
				// Status da Arena - Caso Ambos os Lacaios morram:
				if(lacaio1_vida <= 0 && lacaio3_vida <= 0){ // Se a 'vida' do Lacaio 1 e 'vida' do Lacaio 2 forem menores ou iguais a zero (0).
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 3 - %s - morreu !\n",nome_lacaio3);
					printf("\nLacaio 1 - %s - morreu !\n\n",nome_lacaio1);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);			
				}
				// Status da Arena - Caso somente o Lacaio 1 morra:
				else if(lacaio1_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 1 - %s - morreu !\n\n",nome_lacaio1);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
				// Status da Arena - Caso somente o Lacaio 3 morra:
				else if(lacaio3_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 3 - %s - morreu !\n\n",nome_lacaio3);
				
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
			}
			// Lacaio 3 X Lacaio 2:
			else if(strcmp(lacaio,nome_lacaio3) == 0 && strcmp(adversario,nome_lacaio2) == 0){
				lacaio2_vida = lacaio2_vida - ataque;
				lacaio3_vida = lacaio3_vida - lacaio2_ataque;
				// Status da Arena - Caso Ambos os Lacaios morram:
				if(lacaio2_vida <= 0 && lacaio3_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 3 - %s - morreu !\n",nome_lacaio3);
					printf("\nLacaio 2 - %s - morreu !\n\n",nome_lacaio2);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
				// Status da Arena - Caso somente o Lacaio 2 morra:
				else if(lacaio2_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 2 - %s - morreu !\n\n",nome_lacaio2);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);
				}
				// Status da Arena - Caso somente o Lacaio 3 morra:
				else if(lacaio3_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 3 - %s - morreu !\n\n",nome_lacaio3);
				
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
			}
			// Lacaio 4 X Lacaio 1:
			else if(strcmp(lacaio,nome_lacaio4) == 0 && strcmp(adversario,nome_lacaio1) == 0){
				lacaio1_vida = lacaio1_vida - ataque;
				lacaio4_vida = lacaio4_vida - lacaio1_ataque;
				// Status da Arena - Caso Ambos os Lacaios morram:
				if(lacaio1_vida <= 0 && lacaio4_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 4 - %s - morreu !\n",nome_lacaio4);
					printf("\nLacaio 1 - %s - morreu !\n\n",nome_lacaio1);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
				}
				// Status da Arena - Caso somente o Lacaio 1 morra:
				else if(lacaio1_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 1 - %s - morreu !\n\n",nome_lacaio1);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);	
				}
				// Status da Arena - Caso somente o Lacaio 4 morra:
				else if(lacaio4_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 4 - %s - morreu !\n\n",nome_lacaio4);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);		
				}
			}
			// Lacaio 4 X Lacaio 2:
			else if(strcmp(lacaio,nome_lacaio4) == 0 && strcmp(adversario,nome_lacaio2) == 0){
				lacaio2_vida = lacaio2_vida - ataque;
				lacaio4_vida = lacaio4_vida - lacaio2_ataque;
				// Status da Arena - Caso Ambos os Lacaios morram:
				if(lacaio2_vida <= 0 && lacaio4_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 4 - %s - morreu !\n",nome_lacaio4);
					printf("\nLacaio 2 - %s - morreu !\n\n",nome_lacaio2);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
				
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);	
				}
				// Status da Arena - Caso somente o Lacaio 2 morra:
				else if(lacaio2_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 2 - %s - morreu !\n\n",nome_lacaio2);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
					printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
					printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);
				}
				// Status da Arena - Caso somente o Lacaio 4 morra:
				else if(lacaio4_vida <= 0){
					printf("\n  ---- Status da Arena ----\n\n");
					mostrar = 1;
					printf("\nLacaio 4 - %s - morreu !\n\n",nome_lacaio4);
					
					printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
					printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
					printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
					printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
					printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
					
					printf("\n\n");
					
					printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
					printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
					printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
				}
			}			
		}
		// Exibe um Erro caso o usuário entre com um Heroi inválido, isto é, algum 'nome' de heroi não cadastrado:
		else{
			printf("\n\nErro: voce provavelmente escolheu um 'heroi' nao cadastrado !! Digite novamente...");
		}
	}while(strcmp(opcao,nome_heroi1) != 0 && strcmp(opcao,nome_heroi2) != 0);
	
	if(mostrar == 0){ // Condição utilizada para: se nenhum personagem morrer, exibir o Status da Arena completo.
		printf("\n  ---- Status da Arena ----\n\n");
		printf("\n !! Nenhum personagem morreu, porem a 'vida' de algum personagem foi 'afetada', observe abaixo:\n");
		printf("\n\n");
		printf("Heroi  1 - %s - Pontos de Vida: %d.\n",nome_heroi1, heroi1_vida);
		printf("Lacaio 1 - %s - Pontos de Vida: %d.\n",nome_lacaio1, lacaio1_vida);
		printf("Lacaio 1 - %s - Pontos de Ataque: %d.\n",nome_lacaio1, lacaio1_ataque);
		printf("Lacaio 2 - %s - Pontos de vida: %d.\n",nome_lacaio2, lacaio2_vida);
		printf("Lacaio 2 - %s - Pontos de Ataque: %d.\n",nome_lacaio2, lacaio2_ataque);
						
		printf("\n\n");
						
		printf("Heroi  2 - %s - Pontos de Vida: %d.\n",nome_heroi2, heroi2_vida);
		printf("Lacaio 3 - %s - Pontos de Vida: %d.\n",nome_lacaio3, lacaio3_vida);
		printf("Lacaio 3 - %s - Pontos de Ataque: %d.\n",nome_lacaio3, lacaio3_ataque);
		printf("Lacaio 4 - %s - Pontos de vida: %d.\n",nome_lacaio4, lacaio4_vida);
		printf("Lacaio 4 - %s - Pontos de Ataque: %d.\n",nome_lacaio4, lacaio4_ataque);
	}
return 0;
}
