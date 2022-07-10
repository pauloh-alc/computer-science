// Exercícios 9 e 10 - Resolução
// Discente: Paulo Henrique Diniz de Lima Alencar.
// Matrícula: 494837
#include <stdio.h>
#include <stdlib.h>


// Procedimento: responsável por exibir os erros
void erros (char *msg)
{
	fprintf(stderr,"Erro: %s !! \n",msg);
	exit(1);
}


// Procedimento: exibe o menu de questões
void menu ()
{
	puts("\n[9] Questao 9");
	puts("[10] Questao 10");
	puts("[0] Sair");
}


// Procedimento: exibe itens da questão 9
void menu_questao_9 ()
{
	puts("\n[a] Retorna o fatorial de n! ");
	puts("[b] Retorna o valor de n! / k! (n - k)! ");
	puts("[0] sair");
}


// Função: resolução do item a) da questao 9
int questao_a (int *p)
{
	int n, i, fat = 1;
	do {
		printf("Entre com um número n, onde n >= 0: ");
		scanf("%d",&n);
	} while (n < 0);
	
	*p = n;

	fat = 1;
	for (i = n; i > 0; i--) {
		fat = fat * i;
	}
	
	return fat;
}


// Função: resolução do item b) da questao 9
int fat (int valor) 
{   
    int f = 1, i;

    for (i = valor; i > 0; i--) {
        f = f * i;
    }
    return f;
}

int questao_b ()
{
	int n, k;
	float resultado;

	do {
	  printf("Entre com o valor de n e k (sendo que n >= k): ");
	  scanf("%d %d",&n,&k);
	} while (n < k);

	resultado = fat(n) / (fat(k) * fat(n - k));
	
	return resultado;
}


// Procedimento: organizando os intens da questao 9
void questao_9 ()
{	
	char opcao;
	while (1) {
		menu_questao_9();
		__fpurge(stdin);
		printf("Entre com um opcao: ");
		scanf("%c",&opcao);
		
		
		if (opcao == 0) break;
		
		switch (opcao) {
			case 'a': {
				int n = 0;
				int fat	= questao_a (&n);
				printf("fatorial de %d! é: %d\n", n, fat);
			}
			break;
			
			case 'b': {
				float resultado = questao_b ();
				printf("Resultado =  %f \n", resultado);
			}
			break;
			
			default: {
				erros ("opcao inválida");
			}
			break;
		}
	}
}


// Procedimento: resolução da questao 10
void questao_10 ()
{
	int n, i, anterior, fib; 
    
    do {
        printf("Entre com um número inteiro e positivo: ");
        scanf("%d",&n);
    } while (n <= 0);
    
    anterior = 0;
    fib = 1;

    printf("0 ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ",fib);

        fib = fib + anterior;
        anterior = fib - anterior;
    }
    printf("\n");  
}


// Função: principal
int main (void) {
	
	int opcao;
	
	while (1) {
		menu();
		printf("Entre com um opcao: ");
		scanf("%d",&opcao);
		if (opcao == 3) break;
		
		switch (opcao) {
			case 9: {
				questao_9 ();
			}
			break;
			
			case 10: {
				questao_10 ();		
			}
			break;
			
			default:{
				erros ("opcao invalida");
			}
			break;
		}
	}	
	return 0;
}
