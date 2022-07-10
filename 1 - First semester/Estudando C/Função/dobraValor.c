#include <stdio.h>

int dobraValor(int a);

int main()
{
	int x = 10;
	
	x = dobraValor(x);						
	printf("O valor de x e: %d. \n", x);

return 0;
}


int dobraValor(int a) 
{
	printf("Numero original: %d. \n", a);
	a = a * 2;
	printf("O seu dobro e: %d. \n", a);
	
	return a;
}

