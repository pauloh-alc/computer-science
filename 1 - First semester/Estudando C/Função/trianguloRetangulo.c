#include <stdio.h>
/*
	Função: Verifica se valores de entrada do usuário corresponde a um
			triângulo retângulo.
	Dados de entrada:
		x: lado 1 do triângulo.
		y: lado 2 do triângulo.
		z: lado 3 do triângulo.
	Saída de dados:
		Devolve 1: se for um triângulo retângulo.
		Devolve 0: caso contrário da condição acima.
	 
*/
int verificaTriRet (int x, int y, int z)
{
	
	if (x > y && x > z) {
		if (x*x == y*y + z*z) {
			return 1;
		}	
	}
	else if (y > x && y > z) {
		if (y*y == x*x + z*z) {
			return 1;
		}
	}
	else {
		if (z*z == x*x + y*y) {
			return 1;
		}
	}
	return 0;
}
/*
	Função: responsável exibir mensagem para o usuário.
	Dados de entrada: 
		x: lado 1 do triângulo.
		y: lado 2 do triângulo.
		z: lado 3 do triângulo.
	Saída de dados:
		Exibe se é ou não triangulo retângulo .
		
*/
void exibir (int l1, int l2, int l3)
{
	int retorno;
	
	retorno = verificaTriRet (l1, l2, l3);
	
	if (retorno) printf("E um triangulo retangulo ;D !! \n");
	else 		 printf("Nao e triangulo retangulo :( !! \n");		 
}
int main()
{
	// Dicionário de dados:
	int lado1, lado2, lado3;
	
	// Entrada dados:
	printf("Entre com tres lados de um triangulo respectivamente no seguinte formato lado1,lado2,lado3. \n");
	printf(">>");
	scanf("%d,%d,%d",&lado1,&lado2,&lado3);
	
	exibir (lado1, lado2, lado3);

return 0;
}
