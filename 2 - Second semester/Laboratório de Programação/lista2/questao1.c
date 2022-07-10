// Discente: Paulo Henrique Diniz de Lima Alencar
// Matrícula: 494837
// Questão 1 - lista 2
#include <stdio.h>


// Procedimento: exibe menu de itens.
void menu ()
{
    puts("\n.... Questão 1 ....");
    puts("\n[a] item (a)");
    puts("[b] item (b)");
    puts("[c] item (c)");
    puts("[s] sair");
}


// Função: retorna o fatorial de um número n, de forma recursiva.
int fatorial (int n)
{
    if (n == 0) return 1;
    return n * fatorial(n-1);
}


// Função: recebe um número n e retorna o fatorial desse número.
int a (int *ptr) 
{
    do {
        printf("Entre com um número n, onde n >= 0: ");
        scanf("%d",ptr);
        __fpurge(stdin);
    } while (*ptr < 0);
    
    return fatorial (*ptr);
}


// Função: retorna a combinação de 'n' por 'm' 
int b (int* n, int* m)
{   
    int combinacao;
    do {
        printf("Entre com um número n, onde n >= 0: ");
        scanf("%d",n);
        __fpurge(stdin);
    } while (n < 0);
    
    do {
        printf("Entre com um número m, onde m >= 0: ");
        scanf("%d",m);
        __fpurge(stdin);
    } while (*m < 0 || *m > *n);
    
    combinacao = fatorial (*n) / (fatorial (*m) * fatorial (*n - *m));
    
    return combinacao;
}

// Procedimento: imprime o triângulo de pascal
void c ()
{   
    int k, i, j, numero;
    
    do {
        printf("Entre com um inteiro k, onde k >= 0: ");
        scanf("%d",&k);
        __fpurge(stdin);
    } while (k < 0);

    for (i = 0; i < k + 1; i++) {
        for (j = 0; j <= i; j++) {
            numero = fatorial (i) / (fatorial (j) * fatorial (i - j));
            printf("%d ",numero);
        }
        printf("\n");
    }
}


// Função principal:
int main (void) {
    char op;

    while (1) {
        menu ();
        printf("Entre com um item: ");
        scanf("%c",&op);

        if (op < 90) op += 32;
        
        if (op == 's') break;

        switch (op) {
            case 'a': {
                int n, fat;
                fat = a (&n);
                printf("O fatorial de %d! é: %d \n", n, fat);
            } break;

            case 'b':{
                int n, m, combinacao;
                combinacao = b (&n, &m);
                printf("Combinação (%d, %d) = %d \n", n, m, combinacao);
            } break;  
               
            case 'c':{
                c ();
            } break;

            default:
                printf("Opção inválida !! \n");
            break;  
        }
    }

    return 0;
}
