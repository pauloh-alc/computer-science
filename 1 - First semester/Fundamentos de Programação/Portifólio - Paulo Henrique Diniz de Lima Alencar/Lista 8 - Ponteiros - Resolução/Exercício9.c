#include <stdio.h>
// Exercício 9	
int main ()
{
	int vet[4], i, *p, *q;
	
	// Gerando elemento para o meu vetor.
	for (i = 0; i < 4; i++)
		vet[i] = 3 * i + 1;
	
	p = vet; // atribui o endereço de v[0] para p. Agora p aponta para v[0].
// poderia ser p = &vet[0].

	p++;
	q = p + 2;
	*p = (*p) + 1;
	*q = (*q) - 1;
	
	// Saída de dados:
	for (i = 0; i < 4; i++) 
		printf("%d, ",vet[i]);  // poderia ser printf("%d, ",*(p+i));  
								// Porém antes do for, teria que colocar a seguinte instrução:  p = &v[0], ou p = vet;

	return 0;
}
