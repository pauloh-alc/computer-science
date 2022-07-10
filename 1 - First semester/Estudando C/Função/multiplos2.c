#include <stdio.h>

int eMultiplo(int i, int e)
{
	if(i % e) {    
		return 0;
	}
	else {
		return 1;
	}
}

void multiplos(int k, int x, int y)
{
	int cont = 0;
	int numero = 0;
	
	while (cont < k) {
		if(eMultiplo(numero, x) || eMultiplo(numero, y)) {
			printf("%d, ",numero);
			cont++;
		}
	numero += 1;
	}	
}

int main()
{
	// Dicionário de dados:
	int a, b, n;
	
	// Entrada de dados:
	printf("Entre com um numero natural 'n': ");
	scanf("%d",&n);
	printf("Entre com um numero 'a' e 'b' respectivamente no seguinte formato a:b >> ");
	scanf("%d:%d",&a,&b);
	
	multiplos(n, a, b);

return 0;
}
