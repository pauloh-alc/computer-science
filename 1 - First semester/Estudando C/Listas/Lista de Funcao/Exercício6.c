#include <stdio.h>
#define HAB 3
/*
	Função: Responsável por armazenas os dados digitados para cada habitante.
	Dados de entrada:
		idade: armazena a idade de cada habitante.
		sexo: representa o sexo do habitante 'M' para masculino ou 'F' feminino.
		salario: armazena o salario de cada habitante.
		nFilho: armazena o número de filos de cada habitante. 
*/

void entradaDados (int idade[], char sexo[], float salario[], int nFilhos[])
{
	int i;
	
	for (i = 0; i < HAB; i++) {
		
		printf("Pessoa %d: \n", i + 1);
		printf("Idade: ");
		scanf("%d",&idade[i]); 
		printf("Sexo 'M' ou 'F': ");
		fflush(stdin);
		scanf("%[^\n]c",&sexo[i]); 
		printf("Salario: ");
		scanf("%f",&salario[i]); 
		printf("Filhos: "); 
		scanf("%d",&nFilhos[i]); 
		printf("\n");
		
	}
}

/*
	Função: Calcula a média dos salário dos habitantes presentes no vetor sal[0..HAB-1].
	Dados de entrada:
		sal: vetor com os salários de cada habitante.
	Dados de saída: 
		Exibe: a média dos salários na tela.
*/

void calculaMedia (float sal[])
{
	int i;
	float media = 0;
	
	for (i = 0 ; i < HAB; i++) {
		media += sal[i];
	}
	media = media / HAB;
	
	printf("A media de salario entre os %d habitantes e: %.2f. \n", HAB, media);
}

/*
	Função: Encontra a maior idade armazenada no vetor idade[0..HAB-1].
	Dados de entrada:
		idade: vetor com as idades de cada habitante.
	Dados de saída: 
		maior: armazena a maior idade encontrada no vetor idade[0..HAB-1].
*/

void maior (int idade[])
{
	int i, maior;
	
	maior = idade[0];
	for (i = 1; i < HAB; i++) {
		if (idade[i] > maior) {
			maior = idade[i];
		}
	}
	printf("Maior idade entre os habitante e: %d. \n", maior);
}

/*
	Função: Encontra a menor idade armazenada no vetor idade[0..HAB-1].
	Dados de entrada:
		idade: vetor com as idades de cada habitante.
	Dados de saída: 
		menor: armazena a menor idade encontrada no vetor idade[0..HAB-1].
*/

void menor (int idade[])
{
	int i, menor;
	menor = idade[0];
	for (i = 1; i < HAB; i++) {
		if (idade[i] < menor) {
			menor = idade[i];
		}
	}
	printf("Menor idade entre os habitante e: %d. \n", menor);
}

/*
	Função: Calcula a quantidade de mulheres com até 3 filhos que recebem salário até R$ 500.
	Dados de entrada:
		sexo: vetor com o sexo de cada habitante 'M' ou 'F'.
		sal: vetor com os salários de cada habitante.
		nF: vetor com o número de filhos de cada habitante.
	Dados de saída: 
		Exibe: qtd, que representa a quantidade de mulheres com até 3 filhos que recebem salário até R$ 500.
*/

void mulheres (char sexo[], float sal[], int nF[])
{
	int i, qtd = 0;
	
	for (i = 0; i < HAB; i++) {
		if (sexo[i] == 'F' && nF[i] <= 3 && sal[i] <= 500) qtd += 1;
	}
	printf("A quantidade de mulheres com ate 3 filhos e salario ate R$ 500 e: %d. \n", qtd);
}

int main()
{
	// Dicionário de dados:
	int i;
	int idade[HAB];
	char sexo[HAB];
	float salario[HAB];
	int nFilhos[HAB];
	
	// Chamada das funções que realizam as operações.
	
	entradaDados (idade, sexo, salario, nFilhos);
	calculaMedia (salario);
	maior (idade);
	menor (idade);
	mulheres (sexo, salario, nFilhos);
	
return 0;
}

