#include <stdio.h>
// Exercício 7
int main ()
{
	int a, b, *p1, *p2;
	a = 4;     
	b = 3;
	p1 = &a;        // p1 --> a 
	p2 = p1;        // p2 --> a
	*p2 = *p1 + 3;  // a = 4 + 3 = 7
	b = b * (*p1);  // b = 3 * 7 = 21
	(*p2)++;		// a = 7 + 1 = 8
	p1 = &b;		// p1 --> b
	printf("%d %d\n",*p1,*p2); // tela: 21 8
	printf("%d %d\n",a,b);     // tela: 8 21
	
	// Teste de mesa:
	
	/*       Valores das variáveis     
	  |  a  |   b   |   p1  |   p2  |
	  |  4  |   3   |   &a  |   &a  |
	  |  7  |   21  |   &a  |   &a  | 
	  |  8  |   21  |   &b  |   &a  |
	*/                                
	return 0;
}
