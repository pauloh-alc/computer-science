#include <stdio.h>
// Atribuição de valor utilizando 'Ponteiros':
int main ()
{
	int x = 1, y = 1;
	int *p1, *p2;
	
	printf("x = %d, y = %d \n", x, y);
	p1 = &x;
	*p1 = 2;
	printf("x = %d, y = %d \n", x, y);
	p2 = p1;
	*p2 = 10;
	printf("x = %d, y = %d \n", x, y);
	p2 = &y;
	*p2 = *p1 + 300;
	printf("x = %d, y = %d \n", x, y); 
	
	return 0;
}
