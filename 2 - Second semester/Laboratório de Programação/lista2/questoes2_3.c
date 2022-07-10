// Discente: Paulo Henrique Diniz de Lima Alencar
// Questões: 2 e 3
// Matrícula: 494837
#include <stdio.h>
#include <time.h>


// Procedimento: exibe as questões disponíveis para teste.
void menu_questoes ()
{   
    puts("\n....Questões....");
    puts("\n[2] questão 2");
    puts("[3] questão 3");
    puts("[0] sair");
}


// Procedimento: exibe os itens disponíveis para a questão 2.
void menu_questao2 ()
{
    puts("\n....Questão 2....");
    puts("\n[a] item (a)");
    puts("[b] item (b)");
    puts("[c] item (c)");
    puts("[s] sair");
}


// Procedimento: exibe os itens disponíveis para a questão 3.
void menu_questao3 ()
{
    puts("\n....Questão 3....");
    puts("\n[a] item (a)");
    puts("[b] item (b)");
    puts("[c] item (c)");
    puts("[d] item (d)");
    puts("[e] item (e)");
    puts("[s] sair");
}

// Função: retona o fibonacci de n dado um número n:
int fibonacci_recursiva (int n)
{   
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacci_recursiva (n-2) + fibonacci_recursiva (n-1);
}


// Função: retorna o fibonacci de n dado um número n:
int fibonacci_iterativa (int n)
{   
    int ant = 0, fib = 1, i;
    
    if (n == 1) return ant;
    
    if (n == 2) return fib;

    for (i = 0; i < n - 2; i++) {  
        fib = fib + ant;
        ant = fib - ant;
    }
    return fib;
}


// Procedimento: mostra o tempo que cada uma das funções demora para executar.
void calcula_tempo (int n)
{
    clock_t tempo_inicial, tempo_final;
    
    tempo_inicial = clock ();
        printf("fibonacci(%d): %d \n", n, fibonacci_recursiva (n));
    tempo_final = clock ();
    
    printf("O tempo gasto por fibonacci_recursiva(): %f ms \n\n", 1000 * (double)(tempo_final - tempo_inicial) / (double) (CLOCKS_PER_SEC));


    tempo_inicial = clock ();
        printf("fibonacci(%d): %d \n", n, fibonacci_iterativa (n));
    tempo_final = clock ();
    
    printf("O tempo gasto por fibonacci_iterativa(): %f ms \n\n", 1000 * (double)(tempo_final - tempo_inicial) / (double) (CLOCKS_PER_SEC));
    
}


// Procedimento: responsável por gerenciar a questão 2.
void questao2 ()
{   
    char op;
    
    while (1) {
        menu_questao2 ();
        printf("Escolha um item: ");
        scanf("%c",&op);
        __fpurge(stdin);

        if (op < 90) op += 32;

        if (op == 's') break;

        switch (op) {
            case 'a': {
                int n;

                // Entrada de dados:
                do {
                    printf("Entre com um inteiro n, onde n > 0: ");
                    scanf("%d",&n);
                    __fpurge(stdin);
                } while (n < 0);

                printf("%d ",fibonacci_recursiva(n));      
            
            } break;

            case 'b': {
                int n;

                // Entrada de dados:
                do {
                printf("Entre com um inteiro n, onde n >= 0: ");
                scanf("%d",&n);
                __fpurge(stdin);
                } while (n < 0);

                printf("%d\n",fibonacci_iterativa (n));

            } break;

            case 'c': {
                int n;
                do {
                    printf("Entre com um inteiro n, onde n >= 0: ");
                    scanf("%d",&n);
                    __fpurge(stdin);
                } while (n < 0); 

                calcula_tempo (n);  
            } break;

            default: {
                printf("Opção inválida !! \n");
            }
        }
    }
}


// Função: retorna a quantidade de dígitos presente em um número.
int qtd_de_digitos (int n) 
{   
    int qtd = 0;
  
    if (n == 0) return 1;

    while (n != 0) {
        n = n / 10;
        qtd++;
    }
    return qtd;
}


// Função: retorna a quantidade de vezes que determinado dígito está em um número.
int qtd_de_digitos_dado_um_numero (int numero, int digito)
{
    int qtd = 0, resto;

    if (numero == 0 && digito == 0) return 1;
    
    while (numero != 0) {
        resto = numero % 10;
        numero = numero / 10;

        if (resto == digito) qtd ++;
    }
    return qtd;
}


// Função: retorna 1 se numero1 é permutação de numero2, caso contrário retorna 0.
int permutacao (int numero1, int numero2)
{   
    int n = numero1, resto, qtd1, qtd2;
    if (qtd_de_digitos(numero1) != qtd_de_digitos(numero2)) return 0;
    
    while (n != 0) {
        resto = n % 10;
        n = n / 10;
        
        qtd1 = qtd_de_digitos_dado_um_numero (numero1, resto);
        qtd2 = qtd_de_digitos_dado_um_numero (numero2, resto);
        
        if (qtd1 != qtd2) return 0;
    }
    return 1;
}


// Função: retona 1 se numero1 é sufixo de numero2, caso contrário, retorna 0; 
int sufixo (int numero1, int numero2) 
{   
    int resto1, resto2;
    
    if (numero1 > numero2) return 0;

    while (numero1 != 0) {
        
        resto1 = numero1 % 10;
        numero1 = numero1 / 10;
        
        resto2 = numero2 % 10;
        numero2 = numero2 / 10;
       
        if (resto1 != resto2) return 0;
         
    }
    return 1;
}


// Função: retorna 1 se o numero1 é segmento do numero2, caso contrário, retorna 0.
int segmento (int numero1, int numero2)
{   
    int resto1, resto2, aux;

    if (numero1 > numero2) {
        aux = numero1;
        numero1 = numero2;
        numero2 = aux;
    }

    while (numero2 != 0) {
        if (sufixo (numero1, numero2) == 1) {
            return 1;
        }
        numero2 = numero2 / 10;
    }
    return 0;
}


// Procedimento responsável por gerenciar a questão 3.
void questao3 ()
{   
    char op;

    while (1) {
        menu_questao3 ();
        printf("Escolha um item: ");
        scanf("%c",&op);
        __fpurge(stdin);

        if (op < 90) op += 32;

        if (op == 's') break;

        switch (op) {
            case 'a': {
                int numero;
                printf("Entre com um número: ");
                scanf("%d",&numero);
                __fpurge(stdin);

                printf("%d digitos.\n",qtd_de_digitos (numero));
            } break;
            
            case 'b': {
                int n, d; 
                printf("Entre com um número n: ");
                scanf("%d",&n);
                __fpurge(stdin);
                do {
                    printf("Entre com um inteiro d E [0-9]: ");
                    scanf("%d",&d);
                    __fpurge(stdin);
                } while (d < 0 || d > 10);
                int qtd = qtd_de_digitos_dado_um_numero (n, d);
                printf("O número %d possui %dx dígitos %d. \n",n, qtd, d);
            } break;
            
            case 'c': {
                int y, x;
                do {
                    printf("Entre com um número y, onde y > 0: ");
                    scanf("%d",&y);
                    __fpurge(stdin);
                } while (y <= 0);

                do {
                    printf("Entre com um número x, onde x > 0: ");
                    scanf("%d",&x);
                    __fpurge(stdin);
                } while (x <= 0);

                printf("Retorno: %d \n",permutacao (y, x));
            } break;

            case 'd': {
                int y, x;
                do {
                    printf("Entre com um número y, onde y > 0: ");
                    scanf("%d",&y);
                    __fpurge(stdin);
                } while (y <= 0);

                do {
                    printf("Entre com um número x, onde x > 0: ");
                    scanf("%d",&x);
                    __fpurge(stdin);
                } while (x <= 0);
                printf("Retorno: %d \n", sufixo (x, y));
            } break;

            case 'e': {        
                int y, x;
                do {
                    printf("Entre com um número y, onde y > 0: ");
                    scanf("%d",&y);
                    __fpurge(stdin);
                } while (y <= 0);

                do {
                    printf("Entre com um número x, onde x > 0: ");
                    scanf("%d",&x);
                    __fpurge(stdin);
                } while (x <= 0);

                if (y > x) printf("Retorno: %d \n", segmento (x, y));
                else       printf("Retorno: %d \n", segmento (y, x));
            } break;
            
            default: {
                    printf("Opção inválida !! \n");
            } break;
        }

    }
}

// Função principal:
int main (void) {
    int op;
    while (1) {
        menu_questoes ();
        printf("Escolha uma questão: ");
        scanf("%d",&op);
        __fpurge(stdin);

        switch (op) {
            case 2: {
                questao2 ();
            } break;
                
            case 3: {
                questao3 ();    
            } break;
            default: {
                printf("Opção inválida !!\n");       
            } 
        }
    }
    return 0;
}
