#include <stdio.h>
// Matrizes são ponteiros. E como um vetor é um tipo específico de matriz, temos que um vetor é um ponteiro.
int main ()
{
	int i;
	int v[] = {1,2,3,4,5};
	int *p;
	
	p = v; // Estou enviando o vetor v[0..4] para o ponteiro p;
	
	// Vetor antes da alteração.
	for (i = 0; i < 5; i++) {
		printf("v[%d] = %d. \n",i,v[i]);
	}
	
	printf("\n");
	
	// Processamento: Lembrando que elementos do vetor estão armazenados de forma consecutiva / sequencialmente na memória.
	// Obs: O ponteiro é um endereço de memória e ele armazena o endereço do primeiro elemento que tá na memória, 
	// por meio disso podemos acessar cada elemento do vetor por meio do seu endereço. Como?
	// imagine que p inicialmente armazena o seguinte endereço: p = 9000. Se realirzamos a seguinte operação: p = p + 1;
	// p vai para o endereço p = 9004, pois 1 inteiro = 4 bytes
	 
	
	*p = 89; // Primeiro elemento do vetor v[0] vai ser alterado para número 89.
	
	 p = p + 1; // Somando ao endereço do ponteiro p
	 
	*p = 60;

	
	for (i = 0; i < 5; i++) {
		printf("v[%d] = %d. \n",i,v[i]);
	}
	return 0;
}
