#include <stdio.h>
	void func (int *p)
	{
		int x, y;
		x = *p;
		y = *(p+1);
		
		if (x > y) {
			*p = y;
			*(p+1) = x;
		}
	}
int main ()
{
	int vet[5] = {4,1,3,7,5};
	int *a, i;
	
	a = vet;

	for (i = 0; i < 4; i++) {
		func(a);
		a++;
	}
	
	for (i = 0; i < 5; i++) {
		printf("%d,",vet[i]);
	}
	return 0;
}

