#include <stdio.h>
	// Função: dobra cada elemento do vetor v[0..4]
	// Entrada de dados:
	//		v[0..4] - vetor de elementos inseridos pelo usuário.
	// Saída dados:
	// 		Exibe: elementos do vet[0..4] com valor dobrado.
	void dobro (int vet[])
	{
		int *j, *f;
		f = &vet[5]; // o ponteiro armazena o endereço v[5]
		
		printf("\nvet dobro = ");
		for (j = vet; j < f; j++) {
			(*j) *= 2;
			printf("%d, ",*j);
		}
	}
int main ()
{
	// Dicionário de dados:
	int i;
	int vet[5];
	
	// Leitura de dados:
	for (i = 0; i < 5; i++) {
		printf("vet[%d] = ",i);
		scanf("%d",&vet[i]);
	}
	
	// Chamada de função:
	dobro (vet);
	
	return 0;
}
