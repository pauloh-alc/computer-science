#include <stdio.h>
#include <string.h>

// Estrutura horario (hora, minuto, segundo)
// Estrutura data (dia, mes, ano)
// Estrutura compromisso (data, horario, descrição)
// Quero guardar compromissos.

// typedef = definição de tipo
struct horario{
	int hora, minuto, segundo;
};
typedef struct horario Horario;

struct data{
	int dia, mes, ano;
};
typedef struct data Data;

struct compromisso{
	struct horario time;
    struct data date;
	char description[50];
};
typedef struct compromisso Compromisso;


void mostraMenu ()
{
	puts("**********************");
	puts("******AGENDA**********");
	puts("**[1] ISERIR *********");
	puts("**[2] EXIBIR *********");
	puts("**[0] SAIR   *********");
	puts("**********************");
}
int main () 
{
	Compromisso agenda[50];
//     tipo       variável
	int n = 0;
	
	while (1) {
		int opcao;
		mostraMenu();
		printf("Opcao: ");
		scanf("%d",&opcao);
		if (opcao == 0) break;
		
		switch (opcao) {
			case 1:{
				printf("Data \n");
				scanf("%d/%d/%d",&agenda[n].date.dia,
								 &agenda[n].date.mes,
								 &agenda[n].date.ano);
				printf("Hora\n");
				scanf("%d:%d:%d",&agenda[n].time.hora,
								 &agenda[n].time.minuto,
							     &agenda[n].time.segundo);
				printf("Descricao: ");
				fflush(stdin);
				scanf("%[^\n]s",agenda[n].description);
				n++;
			}
			break;
			case 2:{
				int i;
				
				for (i = 0; i < n; i++) {
					printf("%d/%d/%d (%d:%d:%d) = %s.\n",agenda[i].date.dia,
														 agenda[i].date.mes,
														 agenda[i].date.ano,
														 
														 agenda[i].time.hora,
														 agenda[i].time.minuto,
														 agenda[i].time.segundo,
														 
														 agenda[i].description);
				}
			}
			break;
		}
	}
	return 0;
}
