// Exercício 01
#include <stdio.h>

// Estruturas do tipo: Horario, Data e Compromisso.

typedef struct horario{
	int hora, minutos, segundos;
} Horario;

typedef struct data {
	int dia, mes, ano;
} Data;

typedef struct compromisso {
	Horario horas;
	Data datas;
	char descricao[50];
} Compromisso;

	// Procedimento:
	void menu ()
	{
		puts("[0] SAIR.");
		puts("[1] INSERIR COMPROMISSO.");
		puts("[2] LISTAR COMPROMISSOS.");
	}
		
int main ()
{
	int opcao;
	int n = 0;
	Compromisso informacao[50];
	
	while (1) {
		menu();
		printf("Opcao: ");
		scanf("%d",&opcao);
		if (opcao == 0) break;
		
		switch (opcao) {
			case 1:{
				printf("\nHorario \n");
				printf("Hora: "); scanf("%d",&informacao[n].horas.hora);
				printf("Minutos: "); scanf("%d",&informacao[n].horas.minutos);
				printf("Segundos: "); scanf("%d",&informacao[n].horas.segundos);
				
				printf("\nData: \n");
				printf("Dia: "); scanf("%d",&informacao[n].datas.dia);
				printf("Mes: "); scanf("%d",&informacao[n].datas.mes);
				printf("Ano: "); scanf("%d",&informacao[n].datas.ano);
				
				printf("\nDescricao: \n");
				printf("Descricao: "); fflush(stdin); scanf("%[^\n]s",informacao[n].descricao);
				n += 1;
			break;
			}
			case 2:{
				int i;
				for (i = 0; i < n; i++) {
					printf("%d/%d/%d (%d:%d:%d) %s \n",informacao[i].datas.dia,informacao[i].datas.mes,informacao[i].datas.ano,
					                   		   informacao[i].horas.hora,informacao[i].horas.minutos,informacao[i].horas.segundos,
											   informacao[i].descricao);
				}
			break;
			}
		}
	}

	return 0;
}
