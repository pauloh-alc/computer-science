#include <stdio.h>
// Atribuição utilizando ponteiros:
int main ()
{
	int a = 2, b = 4;
	int *r, *s;
	
	r = &a;
	*r = 5;
	printf("a = %d, b = %d\n",a,b);
	
	s = r;
	
	*s = *s + 1;
	printf("a = %d, b = %d\n",a,b);
	s = &b;
	*s = *r + 1;
	printf("a = %d, b = %d\n",a,b);
	
	return 0;
}
