// Código para Estudo:
#include <stdio.h>
#define TAM 20
/*
	Função: Converte os horários 1 e dois para um única grandeza (segundos).
	Dados de entrada: 
		h: horas.
		m: minutos.
		s: segundos.
	Saída de dados:
		temp: devolve o horário convertido para segundos.
*/
int converteHorario (int h, int m, int s)
{
	int temp;
	
	h = h * 60 * 60;
	m = m * 60;
	temp = h + m + s;
	
	return temp;
}
/*

	Função: Calcula a diferença entre dois horários.
	Dados de entrada:
		h1: armazena a hora do horário 1 digitada pelo usuário.
		m1: armazena os minutos do horário 1 digitada pelo usuário.
		s1: armazena os segundos do horário 1 digitada pelo usuário.
		h2: armazena a hora do horário 2 digitada pelo usuário.
		m2: armazena os minutos do horário 2 digitada pelo usuário.
		s2: armazena os segundos do horário 2 digitada pelo usuário.
	Saída de dados:
		dif: diferença entre horário 1 e horário 2 em segundos. Posteriormente 
		     dif é passada como argumento da função converteParaRelogio(). 
*/

void diferencaHora (int h1, int m1, int s1,
				    int h2, int m2, int s2)
{
	int temp1, temp2, dif;
	
	temp1 = converteHorario (h1, m1, s1);
	temp2 = converteHorario (h2, m2, s2);
	
	dif = temp1 - temp2;
	
	if (dif < 0) dif = -dif;
	
	printf("Diferenca em HH:MM:SS e:"); 
	converteParaRelogio(dif);
	
}
/*
	Função: Converte um determinado tempo em segundos para o seguinte formato:
			HH:MM:SS, exemplo - 3660 segundos é a mesma coisa que 1h:01min:00s.
	Dados de entrada: 
		seg: total de segundos após a diferença entre horário 1 e 2.
	Saída de dados:
		Exibe diferença entre horário 1 e 2 no formato HH:MM:SS.
	
*/
void converteParaRelogio(int seg)
{
	int horas, minutos, segundos;
	
	horas = seg / 3600;          
	minutos = seg % 3600; 
	segundos = minutos % 60;
	minutos = minutos / 60;        
	 
	printf("\n%02d:%02d:%02d ",horas,minutos,segundos); 
}

int main()
{	
    // Dicionário de dados 
	int horas1, minutos1, segundos1, horas2, minutos2, segundos2;
	
	// Entrada de dados:
	printf("Entre com um horario 1 no formato HH:MM:SS >>> ");
	scanf("%d:%d:%d",&horas1,&minutos1,&segundos1);
	
	printf("Entre com um horario 2 no formato HH:MM:SS >>> ");
	scanf("%d:%d:%d",&horas2,&minutos2,&segundos2);
	
	diferencaHora(horas1, minutos1, segundos1,
				  horas2, minutos2, segundos2);	// horas1, minutos1, segundos1, horas2, minutos2, segundos2 são
				  								// os ingredientes que a função diferencaHora precisa para calcular 
				  								// a diferença de horário.
				  
return 0;
}
