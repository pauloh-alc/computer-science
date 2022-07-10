#include <stdio.h>
// Procedimento: uma função que não devolve nada (void)

void olaMundo(void)
{
	printf("Ola Mundo !! \n");	
}

// Função: uma função com retorno (int, float, double...)
void soma(int a, int b)
{	
	int c; // 'c' é uma variável local. Pertencendo assim somente ao Escopo da função soma()
	c = a + b;
	printf("Soma = %d. \n",c);
	olaMundo();
}

int entrada()
{
	int x, y; // Essa variáveis só vão ser reconhecidas nesse escopo
	printf("Entre com o valor de 'x': ");
	scanf("%d",&x);
	printf("Entre com o valor de 'y': ");
	scanf("%d",&y);
	
	soma(x,y); // 'x' e 'y' são os parâmetros.
}

int main()
{	
	entrada();
	return 0;
}
