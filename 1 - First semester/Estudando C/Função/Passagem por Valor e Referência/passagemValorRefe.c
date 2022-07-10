#include <stdio.h>

void copia (int x, int b)
{
	b = b + x;  // Alteração no b, não afetará o a.
}

void referencia (int x, int *b)
{
	*b = *b + x; // Alteração do b, modifica o a. Isso ocorre porque b está apontando para a.
}

int main()
{
	int a = 0;
	
	copia (10, a);
	printf("a = %d \n", a);
	
	referencia (10, &a);
	printf("a = %d \n", a);
	
}
