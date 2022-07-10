#include <stdio.h>

int soma (int x, int n)                 		// 1° execução: x = 1, n = 5
{
	if (x == n) return n; // Base da recursão.	// if(1 == 5) falso. Não retornará nada.
	
	int numeros = soma (x + 1, n);     			// numeros = soma (2,5) --> numeros = soma (3,5) --> numeros = soma (4,5)
	int s = x + numeros;                		// numeros = soma (5,5). Nessa útilma, x = 5 e n = 5, portanto chegamos
												// na Base da recursão, isto é, o critério de parada. Nesse caso,
												// soma (5,5) vai retornar 5, esse valor vai para a função que chamou ele,  
												// ou seja,                          soma  (4,5)  [executa s = 4 + 5,  s = 9];
												// Esse valor s = 9 é retornado para soma  (3,5) [executa s = 3 + 9,  s = 12];
												// Esse valor s = 12 é retornado para soma (2,5) [executa s = 2 + 12, s = 14];
												// Esse valor s = 14 é retornado para soma (1,5) [executa s = 1 + 14, s = 15];
	
	return s;	
}

int main()
{	// Dicionário de dados:
	int numero, resultado;
	
	// Entrada de dados:
	printf("Entre com numero 'n' para saber o somatorio de 1 ate n: ");
	scanf("%d",&numero);           // Suponha de o usuário digitou 5
	
	
	// Chamada da função
	resultado = soma (1, numero); // Lembrando que quando o programa chamar soma (1, numero), ele interroperá, deixando ela "pausada"
								  // main() e vai executar as instruções da função chamada.
	
	// Esse trecho só será executado depois que a função soma() executar todas as suas instruções.	  
	printf("Resultado = %d. \n", resultado);
	return 0; 
}
