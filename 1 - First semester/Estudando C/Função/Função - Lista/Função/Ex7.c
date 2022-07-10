#include <stdio.h>
#define TAM 100
#define tamanhoString 70

int k;

	void menu ()
	{
		puts("[0] - Sair.");
		puts("[1] - Cadastrar pessoa. ");
		puts("[2] - Listar Populacao. ");
		puts("[3] - Media de Salario da Populacao. ");
		puts("[4] - Media do numero de filhos. ");
		puts("[5] - O maior salario. ");
		puts("[6] - Percentual de pessoas com salario inferior a R$380,00.");
		printf("\n");
	}
	
	void cadastrar (int *i, char nome[][tamanhoString], float salario[], int numeroF[]) 
	{
		printf("Nome: ");
		fflush(stdin);
		scanf("%[^\n]s",nome[*i]);
		printf("Salario: ");
		scanf("%f",&salario[*i]);
		printf("Numero de filhos: ");
		scanf("%d",&numeroF[*i]);
		*i += 1;
	}
	
	void listar (int i, char nome[][tamanhoString], float salario[], int numeroF[])
	{	
		int k; 
	
		for (k = 0; k < i; k++) {
			printf("Nome: %s (salario = %.2f, numero filhos = %d)\n",nome[k], salario[k], numeroF[k]);
		}
		printf("\n");
	}
	
	float media (int i, float salario[])
	{
		float m;
		
		for (k = 0; k < i; k++) {
			m = m + salario[k];
		}
		return m / i;
	}
	
	float mediaF (int i, int numeroF[])
	{
		float m;
		
		for (k = 0; k < i; k++) {
			m = m + numeroF[k];	
		}
		return m / i;
	}
	
	int maiorSalario (int i, float salario[])
	{
		int maior;
		int pos;
		
		pos = 0;
		maior = salario[0];
		for (k = 1; k < i; k++) {
			if (salario[k] > maior) {
				maior = salario[k];
				pos = k;
			}
		}
		return pos;
	}
	
	float percentagem (int i, float salario[])
	{
		int qtd;
		
		for (k = 0; k < i; k++) {
			if (salario[k] < 380) {
				qtd += 1;
			}
		}
		return qtd * 100 / i;
	}
int main ()
{

	char nome[TAM][tamanhoString];
	float salario[TAM];
	int numeroF[TAM];
	int n = 0;
	int opcao;
	
	menu ();
	while (1) {
		printf("Opcao: ");
		scanf("%d",&opcao);	
		printf("\n");
		
		if (opcao == 0) break;
		switch (opcao) {
			case 1:{
				cadastrar (&n, nome, salario, numeroF);
			}
			break;
			case 2:{
				listar (n, nome, salario, numeroF);
			}
			break;
			case 3:{
				float mediaS = media (n, salario);
				printf("A media de salario da populaco e: %.2f. \n",mediaS);
			}
			break;
			case 4:{
				float mediaFi = mediaF (n, numeroF);
				printf("A media do numero de filhos e: %.2f. \n",mediaFi);
			}
			break;
			case 5:{
				 int posicao = maiorSalario (n, salario);
				 printf("%s tem o maior salario que e: %.2f. \n", nome[posicao], salario[posicao]);
			}
			break;
			case 6:{
				 float p = percentagem (n, salario);
				 printf("A percentagem de pessoas com salario inferior a R$380 e: %.2f%%. \n",p);
			}
			break;
			default:
				 printf("Erro: voce digitou uma opcao invalida !! \n");
			break;
		}
	}
	return 0;
}
