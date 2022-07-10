#include <stdio.h>
	void func (int *a, int *b)
	{
		int c = *a;  // c = 4
		*a = *b;     // x = 3
		*b = c;      // y = 4
	}
int main () 
{
	int x, y;
	x = 4;
	y= 3;
	func (&x,&y); // a --> x   b --> y
	printf("x = %d, y = %d \n",x,y);
// tela:    x = 3,  y = 4    
	return 0;
}
