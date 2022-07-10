#include <stdio.h>
#define HAB 100
#define tamanhoString 40

int i;

void menu (void) 
{
	puts("[1] Adicionar pessoa. ");
	puts("[2] Listar Pessoas. ");
	puts("[3] A media de salarios da populacao. ");
	puts("[4] A media do numero de filhos. ");
	puts("[5] Maior salario. ");
	puts("[6] Percentual de pessoas com salario inferior a R$ 380.");
	puts("[0] SAIR.");
}

void addPessoa (int *n, char nomes[][tamanhoString], float sal[], int nF[])
{
	printf("Digite o 'nome' da pessoa %d: ", n);
	fflush(stdin);
	scanf("%[^\n]s",nomes[*n]);
	printf("Digite o 'salario': ");
	scanf("%f",&sal[*n]);
	printf("Digite o 'numero de filhos': ");
	scanf("%d",&nF[*n]);
	printf("\n");
	*n += 1;
}

void listarPessoas (int n, char nomes[][tamanhoString], float sal[], int nF[])
{
	i = 0;
	while (i < n) {
		printf("Nome: %s (salario = %.2f; numero de filhos = %d) \n", nomes[i], sal[i], nF[i]);	
	i += 1;
	}
}
float mediaSalarios (int n, float sal[])
{
	float media = 0;
	i = 0;
	while (i < n) {
		media += sal[i];
	i += 1;
	}
	media = media / n;
	
	return media;
}
float mediaFilhos (int n, int nF[])
{
	float media = 0;
	i = 0;
	while (i < n) {
		media += nF[i];
	i += 1;
	}
	media = media / n;
	
	return media;
}

int maiorSalarioPos (int n, char nomes[][tamanhoString], float sal[])
{
	int posicao;
	float maior;
	
	i = 1;
	maior = sal[0];
	while (i < n) {
		if (sal[i] > maior) {
			maior = sal[i];
			posicao = i;
		}
	i += 1;
	}
	
	return posicao;
}

float salarioInferior (int n, float sal[])
{
	float percentual;
	int qtdP = 0;
	
	i = 0;
	while (i < n) {
		if (sal[i] < 380) qtdP += 1;
	i += 1;
	}
	
	percentual = (qtdP * 100) / n;
	
	return percentual;
}
int main()
{
	// Dicionário de dados:
	int nPessoas = 0;
	char nomes[HAB][tamanhoString];
	float salarios[HAB];
	int nFilhos[HAB];
	int opcao;
	
	while (1) {
		menu();
		printf("Opcao: ");
		scanf("%d",&opcao);
		switch (opcao) {
			case 1:{
				addPessoa (&nPessoas, nomes, salarios, nFilhos);
				break;
			}
			case 2:{
				listarPessoas (nPessoas, nomes, salarios, nFilhos);
				break;
			}
			case 3:{
				float media;
				
				media = mediaSalarios (nPessoas, salarios);
				printf("A media dos salarios da populacao de %d habitantes e: %.2f. \n", nPessoas, media);
				printf("\n");
				
				break;
			}
			case 4:{
				float media;
				
				media = mediaFilhos (nPessoas, nFilhos);
				printf("A media dos numeros de filhos e: %.2f. \n", media);
				printf("\n");
				
				break;
			}
			case 5:{
				int posicao;
				
				posicao = maiorSalarioPos (nPessoas, nomes, salarios);
				printf("O maior salario e: %.2f e pertence a %s. \n", salarios[posicao], nomes[posicao]);
				printf("\n");
	
				break;
			}
			case 6:{
				float percentual;
				
				percentual = salarioInferior (nPessoas, salarios);
				printf("O percentual de pessoas com salario inferior a R$ 380,00 e: %.2f %%. \n", percentual);
				printf("\n");
				
				break;
			}
		}
		if (!opcao) break;	
	}
	return 0;
}
