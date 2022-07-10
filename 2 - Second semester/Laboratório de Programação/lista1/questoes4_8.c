// Exercícios 4, 5, 6, 7, 8 - Resolução
// Discente: Paulo Henrique Diniz de Lima Alencar.
// Matrícula: 494837
#include <stdio.h>
#include <stdlib.h>


// Procedimento: exibe erros.
void erros (char msg[])
{
	fprintf(stderr,"Erro: %s !! \n",msg);
	exit(1);
}	


// Procedimento: exibição do menu das questões 4, 5, 6, 7 e 8.
void menu ()
{
	puts("[4] Questão 4");
	puts("[5] Questão 5");
	puts("[6] Questão 6");
	puts("[7] Questão 7");
	puts("[8] Questão 8");
	puts("[0] SAIR");
}


// Procedimento: questao 4, responsável por exibir os pares de primos gêmeos.
void questao_4 ()
{
	int n, i, qtd = 0, numero = 1, a = 2, b = 3, div;
	
	do { 
		printf("Entre com um número n, onde n > 0: ");
		scanf("%d",&n);
	} while (n <= 0);
	
	while (qtd < n) {
		
		div = 0;
		for (i = 1; i <= numero; i++) {
			if (numero % i == 0) div += 1;  
		}
		
		if (div == 2) {
			if (b - a == 2) {
				printf("(%d, %d) são primos gêmeos\n", a, b);
				qtd += 1;
			}
			a = b;
			b = numero;
		}
	numero += 1;
	}
}


// Função: questao 5, retorna o número harmônico H(n).
float questao_5 (int *p)
{
	int n, i;
    float H;

    do {
        printf("Entre com um número n, onde n > 0: ");
        scanf("%d",&n);
    } while (n <= 0);
    
    *p = n;
    
    H = 0;
    for (i = 1; i <= n; i++) {
        H = H + 1.0 / i;
    }
	    
    return H;
}


// Função: questao 6, retorna a soma de uma determinada expressão.
float questao_6 ()
{	
	int n, i, j;
	float soma = 0;
	
	do {
		printf("Entre com um número n, onde n > 0: ");
		scanf("%d",&n);
	} while (n <= 0);
	
	for (i = 1, j = n;  i <= n; i++, j--) {
		soma = soma + (float) i / j;
	}
	return soma;
}

// Função: questao 7, retorna o valor da soma de uma determinada expressão, obs: expressão encontra-se na lista.
 float questao_7 () 
 {
	  int n, i;
	  float soma;

	  do {
		  printf("Entre com um valor n, onde n > 0: ");
		  scanf("%d",&n);
	  } while (n <= 0);
	  
	  soma = 0;
	  for (i = 1; i <= n; i++) {
		 if (i % 2 != 0) soma = soma + 1.0 / i;
		 else            soma = soma - 1.0 / i;
	  }  
	  
	  return soma;
}


// Função: questao 8, o programa retorna a aproximação de 𝝅. 
float questao_8 ()
{
	  float pi;
	  int i, n, x;

	  do {
		  printf("Entre com um número n, onde n > 0: ");
		  scanf("%d",&n);
	  } while (n <= 0);
	  
	  x = 1;
	  for (i = 0; i < n; i++) {
		  if (i % 2 == 0) pi = pi + 4.0 / x;
		  else            pi = pi - 4.0 / x;
	  x += 2;
	  }

	  return pi;
}


// Função: principal
int main (void) {
	int opcao;
	
	while (1) {
		menu();
		printf("Entre com uma opção: ");
		scanf("%d",&opcao);
		if (opcao == 0) break;
		
		switch (opcao) {
			case 4: {
				questao_4();
			} break;
				
			case 5: {
				int n = 0;
				float H = questao_5(&n);
				printf("H (%d) = %f \n",n, H);
			} break;
			
			case 6: {
				float soma = questao_6 ();
				printf("Soma = %f \n",soma);
			} break;
			
			case 7: {
				float soma = questao_7();
				printf("Soma = %f \n", soma);
			} break;
			
			case 8: {
				float pi = questao_8();
				printf("𝝅 = %f \n",pi);
			} break;
			
			default:{
				erros ("opção digitada inválida");
			}
		}
	}
	return 0;
}
