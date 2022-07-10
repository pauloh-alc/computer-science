#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int *p = (int*) malloc (sizeof(int));
	int *q = (int*) malloc (sizeof(int));
	int *j;
	int *h;
	int *v;
	
	int d = 20;
	int e = 30;
	*q = e;
//	*j = d; // Erro [j não inicializado, isto é, não aponta para nenhum endereço válido]
	p = &d;
	h = &e;
	v = q;
	free(q);
	printf("%d",*q); 
	return 0;
}
