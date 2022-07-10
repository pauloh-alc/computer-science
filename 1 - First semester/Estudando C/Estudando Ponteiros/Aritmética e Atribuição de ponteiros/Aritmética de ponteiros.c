#include <stdio.h>

int main ()
{
	
	int v[] = {1,2,3,4};
	int i;
	printf("%d",*v); 
	for (i = 1; i < 4; i++) {
		printf(",%d",*(v+i));
	}
	
	*v = 100;
	*(v + 1) = 200;
	*(v + 2) = 300;
	*(v + 3) = 400;
	printf("\n");
	
	printf("%d",*v);
	for (i = 1; i < 4; i++) {
		printf(",%d",*(v+i));
	}
	 
	return 0;
}
