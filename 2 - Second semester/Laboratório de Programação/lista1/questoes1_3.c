// Exercícios 1, 2 e 3 - Resolução
// Discente: Paulo Henrique Diniz de Lima Alencar.
// Matrícula: 494837

#include <stdio.h>

// Procedimento: exibe erros
void erros(char *msg)
{
	fprintf(stderr,"Erro: %s !!\n", msg);
}


// Procedimento: exibe menu das questões 1, 2 e 3
void menu1 ()
{
	puts("[1] Questão 1.");
	puts("[2] Questão 2.");
	puts("[3] Questão 3.");
	puts("[0] SAIR.");
}


// Procedimento: exibe menu dos itens da questao 1 [a][b][c][sair]
void menu_questao1 ()
{
	puts("[a] Mostrar os n primeiros inteiros, a partir de 0, e o resultado da soma desses numeros.");
	puts("[b] Mostrar os n primeiros inteiros pares, a partir de 0, e a soma desses numeros pares.");
	puts("[c] Mostrar os n primeiros inteiros impares, a partir de 0, e a soma dos numeros impares.");
	puts("[s] sair.");
}


// Procedimento: exibe menu dos itens da questao 2 [a][b][c][d][sair]
void menu_questao2 ()
{
	puts("[a] O usuário digita dois números inteiros n > 0 e m > 0 e o programa mostra se n é divisor de m.");
	puts("[b] O usuário digita um número inteiro n > 0 e o programa mostra os divisores de n.");
	puts("[c] Mostra se o número é perfeito.");
	puts("[d] Mostra se o número é primo.");
	puts("[s] sair");
}


// Procedimento: exibe menu dos itens da questao 3 [a][b][c][sair]
void menu_questao3 ()
{
	puts("[a] O programa retorna a soma dos números pares do intervalo [x, y].");
	puts("[b] O programa retorna a soma dos números perfeitos do intervalo [x, y].");
	puts("[c] O programa retorna a soma dos números primos do intervalor [x, y].");
	puts("[s] sair.");
}


// Exercício 1°:
// Procedimento: item (a) da questao 1
void a (int n)
{
  int i, soma = 0;

	for (i = 0; i < n; i++) {
	    printf("%d, ",i);
	    soma += i;
	}
	printf("\nA soma desses números é: %d\n",soma);
}


// Procedimento: item (b) da questao 1
void b (int n) 
{
  int i, numero, soma_p = 0;

 	
  for (i = 0; i < n; i++) {
	numero = 2 * i;
	printf("%d, ", numero);
	soma_p += numero; 

  }

  printf("\nA soma desses números pares é: %d\n",soma_p);
}


// Procedimento: item (c) da questao 1
void c (int n)
{
  int i, soma_i = 0, num;
  
  num = 1;
  for (i = 0; i < n; i++) {
  	num = 2 * i + 1;
  	printf("%d, ",num);
  	soma_i += num;
  }
  
  
  printf("\nA soma desses número impares é: %d\n",soma_i);
}


// Procedimento: questao 1
void questao1 ()
{	
	unsigned int n;
	char opcao;
	while (1) {
	    menu_questao1();
		
		__fpurge(stdin);
	    printf("Entre com uma opcao: ");
	    scanf("%c",&opcao);
	    __fpurge(stdin);
	    
	    if (opcao == 's') break;

	    printf("Entre com um valor n > 0: ");
	    scanf("%u",&n);
	    __fpurge(stdin);

	    switch (opcao) {
	        case 'a': {
	            a(n);      
	        } break;
	        case 'b': {
	            b(n);
	        } break;
	        case 'c':{
	            c(n);
	        } break;
	        default:
	            erros("opção inválida");
	    }
	}
}


// Exercício 2°:
// Procedimento: item (a) da questao 2
void a2 () 
{
	int n, m;
	
	do {
	    printf("Entre com um valor para n, onde n > 0: ");
	    scanf("%d",&n);
	} while (n <= 0);

	do {
	    printf("Entre com um valor para m, onde m > 0: ");
	    scanf("%d",&m);
	} while (m <= 0);
	
	
	if (m % n == 0) printf("%d é divisor de %d    \n", n, m);
	else            printf("%d não é divisor de %d\n", n, m);
}


// Procedimento: item (b) da questao 2
void b2 ()
{
	int n, i;
	
	do {
	    printf("Entre com um valor para n, onde n > 0: ");
	    scanf("%d",&n);
	} while (n <= 0);
	
	for (i = 1;  i <= n; i++) {
		if (n % i == 0) printf("%d, ",i);
	}
	printf("\n");
}

void c2 ()
{
	int n, i, soma = 0;

	do {
	    printf("Entre com um número n, onde n > 0: ");
	    scanf("%d",&n);
	} while (n <= 0);
	
	for (i = 1; i < n; i++) {
	    if (n % i == 0) {
	        soma += i;
	    }
	} 

	if (soma == n) printf("%d é um número Perfeito !!\n", n);
	else           printf("%d não é um número Perfeito !!\n", n);
}


// Procedimento: item (c) da questao 2
void d2 () 
{
	int n, i, div = 0;

	do {
	    printf("Entre com um número n, onde n > 0: ");
	    scanf("%d",&n);
	} while (n <= 0);  
	
	for (i = 1; i <= n; i++) {
	    if (n % i == 0) {
	        div += 1;
	    }
	}  

	if (div == 2) printf("%d é Primo    \n", n);
	else          printf("%d não é Primo\n", n);
}


// Procedimento: questao 2
void questao2 ()
{	
	char opcao;
	while (1) {
	    menu_questao2();
		
		 __fpurge(stdin);
	    printf("Entre com uma opcao: ");
	    scanf("%c",&opcao);
	    __fpurge(stdin);
	    
	    if (opcao == 's') break;

	    switch (opcao) {
	        case 'a': {
	            a2();      
	        } break;
	        
	        case 'b': {
	            b2();
	        } break;
	        
	        case 'c':{
	            c2();
	        } break;
	        
	        case 'd':{
	            d2();
	        } break;
	        
	        default:
	            erros("opção inválida");
	    }
	}
}


// Exercício 3°:
// Procedimento: item (a) da questao 3
int par (int i)
{
	if (i % 2 == 0) return i;
	else            return 0;
}

void a3 ()
{
	int x, y, i, soma = 0, valor;

	do {
	    printf("Entre com um número 'x' e 'y' respectivamente, onde (x < y): ");
	    scanf("%d %d",&x,&y);
	} while (x >= y);

	for (i = x; i <= y; i++) {
	    valor = par (i);
	    soma += valor; 
	}

	printf("Soma dos números Pares no intervalor [%d, %d] é: %d\n", x, y, soma);
}


// Procedimento: item (b) da questao 3
int perfeito (int n) 
{   
	int i, soma = 0;

	for (i = 1; i < n; i++) {
	    if (n % i == 0) {
	        soma += i;
	    } 
	}

	if (soma == n) return i;
	else           return 0;
}

void b3 ()
{
	int x, y, i, soma_p = 0, valor;
  
	do {
	    printf("Entre com um número 'x' e 'y' respectivamente, onde (x < y): ");
	    scanf("%d %d",&x,&y);
	} while (x >= y);
	
	for (i = x; i <= y; i++) {
	    valor = perfeito(i);
	    soma_p += valor;
	}
  
	printf("A soma dos números perfeitos do intervalo [%d, %d] é: %d \n", x, y, soma_p);
}


// Procedimento: item (c) da questao 3
int primo (int n)
{   
	int i, div = 0;

	for (i = 1; i <= n; i++) {
	    if (n % i == 0) {
	        div += 1;
	    }
	}

	if (div == 2) return n;
	else          return 0;
}

void c3 ()
{
	int x, y, i, soma_p = 0, valor;
	
	do {
	    printf("Entre com um número 'x' e 'y' respectivamente, onde (x < y): ");
	    scanf("%d %d",&x,&y);
	} while (x >= y);

	for (i = x; i <= y; i++) {
	    valor = primo(i);
	    soma_p += valor;
	}

	printf("A soma dos número primos no intervalo [%d, %d] é: %d\n",x, y, soma_p);
}


// Procedimento: questao 3
void questao3 ()
{	
	char opcao;
	while (1) {
	    menu_questao3();
		
		__fpurge(stdin);
	    printf("Entre com uma opcao: ");
	    scanf("%c",&opcao);
  
	    if (opcao == 's') break;

	    switch (opcao) {
	        case 'a': {
	            a3();      
	        } break;
	        
	        case 'b': {
	            b3();
	        } break;
	        
	        case 'c':{
	            c3();
	        } break;
	        
	        default:
	            erros ("opção inválida");
	    }
	}
}


// Função: Principal
int main (void) {
	int opcao;
	
	while (1) {
		menu1();
		
		printf("Entre com uma opcao: ");
		scanf("%d",&opcao);
		
		if (opcao == 0) break;
		
		switch(opcao) {
			case 1: {
				questao1();
			} break;
			
			case 2: {
				questao2();
			} break;
			
			case 3: {
				questao3();
			} break;
			
			default:{
				erros ("opção inválida");
			}
		}
	}
	
	return 0;
}
