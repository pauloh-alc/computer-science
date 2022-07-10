#include <stdio.h>
	int converte (int h, int m, int s) 
	{
		int totalSegundos;
		
		h = h * 60 * 60;
		m = m * 60;
		totalSegundos = h + m + s;
		
		return totalSegundos;
	}

	void exibir (int h, int m, int s)
	{
		printf("Total de segundos: %d. \n", converte (h, m, s));
	}
int main ()
{
	int horas, minutos, segundos;
	
	printf("Entre com um horario no seguinte formato HH:MM:SS >>> ");
	scanf("%d:%d:%d",&horas,&minutos,&segundos);
	
	exibir (horas, minutos, segundos);
	exibir (3, 8, 7);
}
