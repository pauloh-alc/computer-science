#include <stdio.h>
int main(){
	// Exercício 15 -

	int mes, dia;
	
	printf("Entre com o MES do seu aniversario >>");
	scanf("%d",&mes);
	printf("Entre com o DIA do seu aniversario >>");
	scanf("%d",&dia);
	
	switch(mes){
		case 1:
			printf("MAGO ");
		break;
		
		case 2:
			printf("ARQUEIRO ");
		break;
		
		case 3:
			printf("SUPORTE ");
		break;
		
		case 4:
			printf("BARDO ");
		break;

		case 5:
			printf("SNIPER ");
		break;
		
		case 6:
			printf("GUERREIRO ");
		break;
		
		case 7:
			printf("FUZILEIRO ");
		break;
		
		case 8:
			printf("MPV ");
		break;

		case 9:
			printf("BARBARO ");
		break;

		case 10:
			printf("NPC ");
		break;
	
		case 11:
			printf("PK ");
		break;
	
		case 12:
			printf("NOOB ");
		break;
	}
		
	
	switch(dia){
		case 1:
			printf("PROTETOR DOS NOVATOS ");
		break;
		
		case 2:
			printf("DOMADOR DE DRAGOES ");
		break;
		
		case 3:
			printf("LIDER DA GUILDA ");
		break;
		
		case 4:
			printf("ESPECIALISTAS EM QUESTS ");
		break;

		case 5:
			printf("QUE SO MATA NA FAQUINHA ");
		break;
		
		case 6:
			printf("DA BUID ERRADA ");
		break;
		
		case 7:
			printf("ODIADO DO SERVER ");
		break;
		
		case 8:
			printf("DE FRANG NEGATIVO ");
		break;

		case 9:
			printf("LADRAO DE KILL ");
		break;

		case 10:
			printf("LOCO DAS TROCAS ");
		break;
	
		case 11:
			printf("MENDIGO DE ITENS ");
		break;
	
		case 12:
			printf("QUE SO DA RAGE ");
		break;
		
		case 13:
			printf("ENTENDEDOR DE X1 ");
		break;
		
		case 14:
			printf("QUE SO ATRASA A PARTY ");
		break;
		
		case 15:
			printf("CACADOR DE BUGS ");
		break;
		
		case 16:
			printf("ESPECIALISTAS EM HEADSHOT ");
		break;

		case 17:
			printf("FANATICO DAS SKINS ");
		break;
		
		case 18:
			printf("PERDIDO NO MAPA ");
		break;
		
		case 19:
			printf("QUE NAO ACERTA NADA ");
		break;
		
		case 20:
			printf("VICIADO EM MANA ");
		break;

		case 21:
			printf("QUE CARREGA O TIME ");
		break;

		case 22:
			printf("CAMPER ");
		break;
	
		case 23:
			printf("DANCALINO DA SAFEZONE ");
		break;
		
		case 24:
			printf("ANTI-HACKERS ");
		break;
		
		case 25:
			printf("QUE SO MORRE ");
		break;
		
		case 26:
			printf("QUE NUNCA AJUDA O TIME ");
		break;
		
		case 27:
			printf("EXPLORADOR DO MAPA ");
		break;

		case 28:
			printf("QUE SO LOGA PARA CONVERSAR ");
		break;
		
		case 29:
			printf("QUE TANKA TUDO ");
		break;
		
		case 30:
			printf("LOBO SOLITARIO ");
		break;
		
		case 31:
			printf("AMIGO DO GM ");
		break;
	}
			
return 0;
}