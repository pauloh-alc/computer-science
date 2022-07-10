#include <stdio.h>
// passagem por valor = copia o argumento para o parâmetro.
// passagem por referência = parâmetro e argumento estão ligados
// ou seja, se alterar o parâmtro, altera tbm o argumento.

void f (int a, float *b, char *c)
{
	*b = (float) a / 2;
	*c = a + 'a';
}

int main () 
{
	int x;
	float y;
	char z;
	
	printf("Entre com valor de x:");
	scanf("%d",&x);
	
	f(x, &y, &z); // argumento é a expressão ou 'variável' na chamada da função. Nesse caso, x,y,z são argumentos.

	printf("x = %d, y = %.2f, z = %c \n", x, y, z);
	
}
