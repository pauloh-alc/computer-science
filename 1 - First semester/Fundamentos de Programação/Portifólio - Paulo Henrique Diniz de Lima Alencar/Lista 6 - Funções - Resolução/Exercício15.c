#include <stdio.h>

int a = 0;

int fib (int n)
{
	if (n == 1) {
		printf("1, ");
		return 1;
	}
	else {
		int num = fib (n - 1) + a;
	    a = num - a;
	    printf("%d, ",num);
		return num;
	}
}

int main ()
{	
	int numero, result;

	printf("Entre com um numero 'n': ");
	scanf("%d",&numero);

	result = fib (numero);
	return 0;
}

