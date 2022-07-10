#include <stdio.h>
	int funcao (int n, int *cubo)
	{
		int potencia2;
		
		potencia2 = n * n;
		*cubo = potencia2 * n;
		
		return potencia2;
	}
int main ()
{
	int n, quadrado, x;
	printf("Entre com um numero 'n': ");
	scanf("%d",&n);

	quadrado = funcao(n, &x);
	
	printf("n^2 = %d\n",quadrado);
	printf("n^3 = %d",x);
	
	return 0;
}
