#include <stdio.h>
// Aritimética de ponteiros:
int main ()
{
	int v[6] = {1,2,3,4,5};
	int *p;

	// Endereço do primeiro elemento do v[0..4], isto é, v[0] está em p. 
	// Portanto, p aponta para essa posição.
	// Poderia ser p = &v[0].
	p = v;
	
	printf("Antes: %d \n",v[0]);
	
	*p = 10; // Estou alterando o conteúdo para onde ponteiro p aponta.
	
	printf("Depois: %d \n",v[0]);
	printf("Depois: %d \n",*v);
	
	
	return 0;
}
