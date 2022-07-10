#include <stdio.h>
	void func (int *p, int *q)
	{
		int x, y;
		x = *p;
		y = *q;
		
		if (x > y) {
			*p = y;
			*q = x;
		}
	}
int main ()
{
	int vet[6] = {2,3,6,1,4,5};
	int *a, *b, i, n;
	n = 6;
	
	a = vet;
	b = vet + (n/2);

	for (i = 0; i < n/2; i++) {
		func(a,b);
		a++;
		b++;
	}
	
	for (i = 0; i < n; i++) {
		printf("%d,",vet[i]);
	}
	return 0;
}

