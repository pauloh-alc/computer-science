#include <stdio.h>

/*
	Função: Verifica se os valores digitados pelo usuário atende às condições para ser um triângulo.
	Dados de entrada: 
		x: lado número 1 do triângulo.
		y: lado número 2 do triângulo.
		k: lado número 3 do triângulo.
	Saída de dados:
		Devolve 1: se atende as condições para ser um triângulo.
		Devolve 0: caso contrário da condição citada acima.
*/

int eTringulo(int x, int y, int k)
{
	if (x < y + k && y < x + k && k < x + y) return 1; 
	
	return 0;
}

/*
	Função: Determina e mostra o tipo de triângulo. Equilátero se, e somente se, 3 lados são iguais.
			Isosceles se, e somente se, 2 lados são iguais. Escaleno se, e somente se 3 lados são di-
			ferentes.
	Dados de entrada:
		x: lado número 1 do triângulo.
		y: lado número 2 do triângulo.
		k: lado número 3 do triângulo.
	Saída de dados:
		Exibe: Triângulo Equilátero, Isósceles ou Triângulo Escaleno.
*/
void qualTriangulo(int x, int y, int k)
{
	if (x == y && y == k) 				 printf("Triangulo Equilatero !! \n");
	else if (x == y || x == k || y == k) printf("Triangulo Isosceles !! \n");
	else 								 printf("Triangulo Escaleno !! \n");									   
}

int main()
{
	// Dicionário de dados:
	int lado1, lado2, lado3, verifica;
	
	// Entrada de dados:
	printf("Entre com 3 valores > 0 respectivamente para os lados de um triangulo. \n");
	printf("Formato: lado1,lado2,lado\n >>");
	scanf("%d,%d,%d",&lado1,&lado2,&lado3);
	
	verifica = eTringulo(lado1, lado2, lado3);
	
	if (verifica) qualTriangulo(lado1, lado2, lado3);
	else 		  printf("\n Erro: os dados digitados nao correspondem ao valores dos lados de um triangulo !! \n");
	
return 0;
}
