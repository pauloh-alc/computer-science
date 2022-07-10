#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i;
	int *p;
	
	p = (int *) malloc (7 * sizeof(int));
	
	if (p == NULL) {
		printf("Erro: erro na alocacao de memoria !! \n");
		exit(1);
	}
	
	*p       = 1;
	*(p + 1) = 2;
	*(p + 2) = 3;
	*(p + 3) = 4;
	*(p + 4) = 5;
	*(p + 5) = 80;
	*(p + 6) = 80;

	
	for (i = 0; i < 7; i++) 
		printf("%d,",*(p+i));
	return 0;
}
