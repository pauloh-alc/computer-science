#include <stdio.h>

	void troca (int x, int y)
	{
		int temp;
		
		x = y;
		y = temp;
		
	}

int main ()
{
	int a;
	int *b; // endereço de memória - ponteiro que irá "apontar" para int
	// apontar - é ter o endereço de memória de uma memória
	a = 2;
	b = &a; // b aponta para a
	
	*b = 5;
	
	printf("end(a) = %p, valor(a) = %d \n", &a, a);
	printf("end(b) = %p, valor(a) = %x \n", &b, b);
	return 0;
}
