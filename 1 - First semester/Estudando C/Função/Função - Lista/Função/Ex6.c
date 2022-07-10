#include <stdio.h>
#define TAM 15
int i;
	int maiorIdade (int idade[])
	{
		int maior;
		
		maior = idade[0];
		for (i = 1; i < TAM; i++) {
			if (idade[i] > maior) {
				maior = idade[i];
			}
		}
		
		return maior;
	}
	
	int menorIdade (int idade[])
	{
		int menor;
		
		menor = idade[0];
		for (i = 1; i < TAM; i++) {
			if (idade[i] < menor) {
				menor = idade[i];
			}
		}
		return menor;
	}
	float media (float sal[])
	{
		float m;
		
		for (i = 0; i < TAM; i++) {
			m = m + sal[i];
		}
		
		return m / TAM;
	}
	
	int qtdMulheres (char sexo[],  float salario[], int numeroF[]) 
	{
		int qtd = 0;
		
		for (i = 0; i < TAM; i++) {
			if (sexo[i] == 'F' && salario[i] <= 500.0 && numeroF[i] == 3) {
				qtd += 1;
			}
		}
		
		return qtd;
	}
	void leitura (int idade[], char sexo[], float salario[], int numeroF[])
	{
		
		for (i = 0; i < TAM; i++) {
	
			printf("Idade %d: ", i);
			scanf("%d",&idade[i]);
			printf("Sexo %d: ",i);
			fflush(stdin);
			scanf("%[^\n]c",&sexo[i]);
			printf("Salario %d: ",i);
			scanf("%f",&salario[i]);
			printf("Numero de filhos %d: ",i);
			scanf("%d",&numeroF[i]);
			printf("\n");
		}
	}

int main () 
{
	int idade[TAM];
	char sexo[TAM];
	float salario[TAM];
	int numeroF[TAM];
	
	float mediaS;
	int maiorI;
	int menorI;
	int qtd;
	
	leitura             (idade, sexo, salario, numeroF);
	mediaS = media      (salario);
	menorI = menorIdade (idade);
	maiorI = maiorIdade (idade);
	qtd = qtdMulheres (sexo, salario, numeroF);
	
	printf("A media de salario entre os %d hibitantes e: %.2f. \n",TAM, mediaS);
	printf("A maior idade do grupo e: %d. \n", maiorI);
	printf("A menor idade do grupo e: %d. \n", menorI);
	printf("A qtd de mulheres com 3 filhos que recebem ate R$ 500 e: %d. \n", qtd);
	
	return 0;
}


