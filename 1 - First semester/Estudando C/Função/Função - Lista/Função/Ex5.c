#include <stdio.h>

int i;

	int maiorTemperatura (float t[])
	{
		float maior;
		int posicaoMaior = 0;
		
		maior = t[0];
		posicaoMaior = 0;
		for (i = 0; i < 12; i++) {
			if (t[i] > maior) {
				maior = t[i];
				posicaoMaior = i;
			}
		}
		return posicaoMaior;
	}
	
	int menorTemperatura (float t[])
	{
		float menor;
		int posicaoMenor = 0;
		
		menor = t[0];
		for (i = 0; i < 12; i++) {
			if (t[i] < menor) {
				menor = t[i];
				posicaoMenor = i;
			}
		}
		return posicaoMenor;
	}

int main ()
{

	int indiceMaior, indiceMenor;
	float temperatura[12];
	char meses [12][25] = {
							{"Janeiro"},
							{"Fevereiro"},
							{"Marco"},
							{"Abril"},
							{"Maio"},
							{"Junho"},
							{"Julho"},
							{"Agosto"},
							{"Setembro"},
							{"Outubro"},
							{"Novembro"},
							{"Dezembro"},
						  };
	// Entrada de dados:				  		  
	for (i = 0; i < 12; i++) {
		printf("Temperatura do mes de %s: ", meses[i]);
		scanf("%f",&temperatura[i]);
	}
	
	// Saída de dados:
	indiceMaior = maiorTemperatura (temperatura);
	indiceMenor = menorTemperatura (temperatura);
	
	printf("A maior temperatura do ano foi no mes de %s, com: %.2f graus celsius. \n", meses[indiceMaior], temperatura[indiceMaior]);
	printf("A menor temperatura do ano foi no mes de %s, com: %.2f graus celsius. \n", meses[indiceMenor], temperatura[indiceMenor]);
	
}
