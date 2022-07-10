#include <stdio.h>
// Estruturas:

typedef struct {
	char rua[30];
	int  numero;
	char bairro[30];
	char cidade[30];
	char estado[30];
	long int cep;
} Endereco;

typedef struct {
	char nome[30];
	Endereco endereco;
	float salario;
	long int identidade;
	long int cpf;
	char estadoCivil;
	long int telefone;
	int idade;
	char sexo;
} Candidato;

	void menu ()
	{
		puts("[1]. Cadastrar candidato.");
	}
	void cadastrar_candidatos (Candidato candidatos[], int *n)
	{
	
		fflush(stdin);
		printf("Cadastrar candidato %d: \n",*n);
		printf("Nome: "); scanf("%d",candidatos[*n].nome);
		
		printf("Endereco: \n"); 
		printf("Rua - "); 	 fflush(stdin); scanf("%[^\n]s",candidatos[*n].endereco.rua); 
		printf("Numero - "); fflush(stdin); scanf("%d",&candidatos[*n].endereco.numero); 
		printf("Bairo - ");  fflush(stdin); scanf("%[^\n]s",candidatos[*n].endereco.bairro); 
		printf("Cidade - "); fflush(stdin); scanf("%[^\n]s",candidatos[*n].endereco.cidade); 
		printf("Estado - "); fflush(stdin); scanf("%[^\n]s",candidatos[*n].endereco.estado); 
		printf("CEP - "); fflush(stdin); scanf("%d",&candidatos[*n].endereco.cep); 
		
		printf("Salario: ");       fflush(stdin); scanf("%f",&candidatos[*n].salario); 
		printf("Identidade: ");    fflush(stdin); scanf("%ld",&candidatos[*n].identidade); 
		printf("CPF: ");           fflush(stdin); scanf("%ld",&candidatos[*n].cpf); 
		printf("Estado Civil: ");  fflush(stdin); scanf("%[^\n]s",&candidatos[*n].estadoCivil);
		printf("Telefone: ");      fflush(stdin); scanf("%ld",&candidatos[*n].telefone);
		printf("Idade: ");         fflush(stdin); scanf("%d",&candidatos[*n].estadoCivil);
		printf("Sexo (M ou F): "); fflush(stdin); scanf("%c",&candidatos[*n].sexo);
		(*n)++;
		printf("\n");
	}
int main ()
{
	
	Candidato candidatos[200];
	int opcao;
	int n = 0;
	
	while (1) {
		menu ();
		printf("Entre com uma opcao: ");
		scanf("%d",&opcao);
		switch (opcao) {
			case 1:{
				cadastrar_candidatos (candidatos, &n);
				break;
			}
			case 2:{
				
				break;
			} 
		}
	}
	return 0;
}
