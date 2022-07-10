#include <stdio.h>
#include <string.h>

typedef struct {
	int hora, minutos, segundos;
} Hora;

typedef struct {
	int dia, mes, ano;
} Data;

typedef struct {
	Hora horas;
	Data datas;
	char descricao[50];
} Compromisso;
 
int main ()
{
	Compromisso agenda;
	
	agenda.horas.hora = 10;
	agenda.horas.minutos = 20;
	agenda.horas.segundos = 59;
	
	agenda.datas.dia = 10;
	agenda.datas.mes = 07;
	agenda.datas.ano = 2000;
	
	strcpy(agenda.descricao, "I was Born !!");
	
	printf("Horario [%d:%d:%d] Data [%d/%d/%d] Descricao (%s). \n",agenda.horas.hora, agenda.horas.minutos, agenda.horas.segundos,
																   agenda.datas.dia, agenda.datas.mes, agenda.datas.ano,
																   agenda.descricao);
	
	return 0;
}
