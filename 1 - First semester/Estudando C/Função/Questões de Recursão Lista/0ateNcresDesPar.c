#include <stdio.h>

int numero;

void menu (void)
{
	printf("\n");
	puts("[0] Sair.");
	puts("[1] Imprimir todos os numeros naturais de 0 ate n em ordem crescente.");
	puts("[2] Imprimir todos os numeros naturais de 0 ate n em ordem decrescente.");
	puts("[3] Imprimir todos os numeros pares de 0 até n em ordem crescente.");
}
void entrada (void)
{
	printf("Entre com um valor positivo para 'n': ");
	scanf("%d",&numero);
}
void crescente (int n)
{
	if (n == -1) return 0;
	
	crescente (n - 1);
	printf("%d\n", n);
	
	/*
	if (n == -1) return -1;
	
	int algorismo = crescente (n - 1) + 1;	
	printf("%d,", algarismo);
	return algarismo;
	*/
}

int decrescente (int n, int cont)
{
	if (cont == n + 1) return n;
	
	decrescente (n, cont + 1);
	printf("%d \n",cont);	
}

int main () 
{	

	int opcao;
	
	while (1) {
		
		menu();
		printf("Entre com sua opcao: ");
		scanf("%d",&opcao);
		
		if (!opcao) break;
		 
		switch (opcao) {
			case 1:
				entrada ();
				crescente (numero);
			break;
			
			case 2:
				entrada ();
				decrescente (numero, 0);
			break;
			
		//	case 3:
			//break;
		}
	}
	return 0;
}
