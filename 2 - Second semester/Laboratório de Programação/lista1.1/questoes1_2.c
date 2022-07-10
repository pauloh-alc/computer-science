#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void a ()
{
    int n, i = 0, soma = 0;
    
    do {
        printf("Entre com um numero n, n > 0: ");
        scanf("%d",&n);
        __fpurge(stdin);
    } while (n <= 0);
    
    while (i < n) {
        printf("%d ", i);
        soma += i;
    i++;
    }

    printf("\nsoma = %d\n",soma);
}


void b ()
{   
    int n, i = 0, soma = 0;
        
    do {
        printf("Entre com um n, onde n > 0: ");
        scanf("%d",&n);
        __fpurge(stdin);
    } while (n <= 0);
   
    while (i < n*2) {
        printf("%d ", i); 
        soma += i;
        i += 2;
    }
    printf("\nsoma = %d \n", soma);
}


void c ()
{    
    int n, i, soma = 0;
    do {
        printf("Entre com um n, onde n > 0: ");
        scanf("%d",&n);
        __fpurge(stdin);
    } while (n <= 0);
    
    for (i = 1; i <= n; i++) {
        printf("%d ",2 * i - 1 );
        soma += 2 * i - 1;           
    }
    printf("\n%d, soma = %d \n", i,soma);
}   

void menu1 ()
{
    puts("\na - item (a)");
    puts("b - item (b)");
    puts("c - item (c)");
    puts("s - sair");
}


void questao1 ()
{
    char op;

    while (1) {
        menu1();
        printf("Escolha um item: ");
        scanf("%c",&op);
        __fpurge(stdin);
        
        if (op <= 90) op += 32;
        
        if (op == 's') break;

        switch (op) {
            case 'a':   
                a();
            break;
            
            case 'b':
               b();
            break;
            
            case 'c':
               c();
            break;

            default: 
                printf("Opção inválida !!\n");
        }
    }
}


void menu2 () 
{
    puts("\na - item (a)"); 
    puts("b - item (b)"); 
    puts("c - item (c)"); 
    puts("d - item (d)");
    puts("s - sair");

}

void a2 ()
{
    int n, m;

    do {
        printf("Entre com um n, onde n > 0: ");
        scanf("%d",&n);
        __fpurge(stdin);
    } while (n <= 0);

    do {
        printf("Entre com um m, onde m > 0: ");
        scanf("%d",&m);
        __fpurge(stdin);
    } while (m <= 0);
    
    m % n == 0 ? printf("%d é divisor de %d \n", n, m) : printf("%d não é divisor de %d\n", n, m);
}

void b2 () 
{       
      int n, i;
      do {
          printf("Entre com um n, onde n > 0: ");
          scanf("%d",&n);
          __fpurge(stdin);
      } while (n <= 0);
      
      printf("1, ");
      for(i = 2; i <= n / 2; i++) {
            if (n % i == 0) printf("%d, ",i);
      }
      if (n != 1) printf("%d",n);
}

void c2 () 
{   
    int n, i, s = 0;
    do {
        printf("Entre com um número n, onde n > 0: ");
        scanf("%d",&n);
        __fpurge(stdin);
    } while (n <= 0);

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) s = s + i;
    }
    s + 1 == n ? printf("%d é perfeito \n", n) : printf("%d não é perfeito \n",n);
}

void d2 ()
{   
    int n, i;
    do {
        printf("Entre com um número n, onde n > 0: ");
        scanf("%d",&n);
        __fpurge(stdin);
    } while (n <= 0);

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) break;
    }
    if (i == n / 2 + 1) printf("%d é primo ! \n", n);
    else                printf("%d não primo ! \n", n);
}

void questao2 () 
{   
    char op;
    while (1) {
        menu2();
        printf("Entre com item: ");
        scanf("%c",&op);
        __fpurge(stdin);

        if (op <= 90) op += 32;

        if (op == 's') break;

        switch (op) {
            case 'a':
                a2 ();
            break;

            case 'b':
                b2 ();
            break;

            case 'c':
                c2 ();
            break;

            case 'd':
                d2 ();
            break;
            default:
                printf("Opção inválida !!\n");
        }
    }

}

void menu_questoes ()
{
    puts("[1] questão 1");
    puts("[2] questão 2");
    puts("[3] sair");
}

int main (void) {
    
    int op;

    while (1) {
        menu_questoes();
        printf("Escolha uma questão: ");
        scanf("%d", &op);
        __fpurge(stdin);
        
        if (op == 3) break;
        
        switch (op) {
            case 1:
                questao1();
            break; 

            case 2:
                questao2();
            break;

            default:
                printf("Opção inválida !! \n");
        }
    }       
    return 0;
}
