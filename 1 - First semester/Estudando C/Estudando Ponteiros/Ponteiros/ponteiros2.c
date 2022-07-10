#include <stdio.h>

int main ()
{
	char a = 'P';
	char *p;
	
	// p vai receber o endereço da 
	// variável a. Operador '&' sig-
	// nifica "endereço de".
	p = &a;
	
	printf("size(a) = %ld bytes, location(a) = %p, valor(a) = %c \n",sizeof(a),&a,a);
	printf("size(p) = %ld bytes, location(p) = %p, valor(p) = %p, pnt(p) = %c \n",sizeof(p),&p,p,*p);
	
	return 0;
}
