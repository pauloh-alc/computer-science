#include <stdio.h>

int main ()
{
	int i;
	// Declare an array 
	int v[3] = {10,100,200};
	
	// Declare pointer variable
	int *p;
	
	// Assign the address of v[0] to p
	// Atribui o endereço de v[0] em p
	// We can use p = &val[0];(both are same)
	// Nós podemos usar p = &v[0];(ambos são o mesmo)
	p = v;
	
	for (i = 0; i < 3; i++) {
		
		printf("Conteudo que *p aponta e = %d. \n",*p);
		printf("Conteudo de p = %p. \n",p);
		
		// Incrementa 1 inteiro (4 bytes) ao endereço de p.
		p += 1;
	}

	return 0;
}
