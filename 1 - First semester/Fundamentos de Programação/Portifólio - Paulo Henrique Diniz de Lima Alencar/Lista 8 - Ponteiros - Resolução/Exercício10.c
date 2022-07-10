#include <stdio.h>
// Exercício 10

	// Função: mostra os elementos de um vetor, que foram inseridos pelo usuário.
	void vetRaiz (int vet[], int *i, int *f)
	{
		printf("\nvet lido = ");
		for (i = vet; i < f; i++) {
			printf("%d, ",*i);
		}
	}
	
	// Função: calcula e exibe o dobro dos elementso de um vetor, que foram 
	// inseridos pelo usuário.
	void dobro (int vet[], int *i, int *f)
	{
		printf("\nvet dobro = ");
		for (i = vet; i < f; i++) {
			printf("%d, ",(*i)*2);
		}
	}
	
int main ()
{
	// Dicionário de dados:
	int vet[5];
	int *i, *f;
	int k = 0;
	
	f = &vet[5]; // ponteiro armazena endereço de vet[5].
	
	// Leitura de dados:
	for (i = vet; i < f; i++) {
		printf("v[%d] = ",k);
		scanf("%d",i);
	k++;
	}
	
	// Chamda das funções: 
	vetRaiz (vet, i, f); 
	dobro   (vet, i, f);
	
	return 0;
}
