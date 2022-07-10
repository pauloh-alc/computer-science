#include <stdio.h>
	int verifica (int x, int y, int z)
	{
		if (x < y + z && y < x + z && z < x + y) {
			return 1;
		}
		return 0;		
	}
	
	int tipoTriangulo (int x, int y, int z)
	{
		if (x == y && y == z) 				 return 0;
		else if (x == y || y == z || x == z) return 1;
		else  								 return 2;
	}
int main ()
{
	int lado1, lado2, lado3, tipo;
	
	printf("Entre com os lados de um triangulo no seguinte formato lado1,lado2,lado3 >>>");
	scanf("%d,%d,%d",&lado1,&lado2,&lado3);
	
	if (verifica(lado1, lado2, lado3)) {
		
		tipo = tipoTriangulo (lado1, lado2, lado3);
		
		if (tipo == 0) 		printf("Triangulo Equilatero !! \n");
		else if (tipo == 1) printf("Triangulo Isosceles !! \n");
		else				printf("Triangulo Escaleno !! \n");
	}
	else {
		printf("Erro: os numeros digitados nao correspondem aos lados de um triangulo !! \n");
	}
}
