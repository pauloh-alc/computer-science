// Discente: Paulo Henrique Diniz de Lima Alencar.
// Questões 5 e 7 forma 2.
#include <stdio.h>

void menu ()
{
    puts("\n[5] questão 5"); 
    puts("[7] questão 7");
    puts("[0] sair");
} 

void questao5 ()
{   
    int n, i;
    float H;

    do {
        printf("Entre um número n, onde n > 0: ");
        scanf("%d",&n);
    } while (n <= 0);
    H = 1;    
    for (i = 2; i <= n && n > 1; i++)
      H = H + 1.0 / i;
    printf("H = %f \n",H);
}

void questao7 ()
{   
    int n, i, aux = 1;
    float s = 0;

    do {
        printf("Entre com um número n, onde n >= 0: ");
        scanf("%d",&n);
    } while (n <= 0);
    
    for (i = 1; i <= n; i++) {
        s = s + aux * 1.0 / i;
        aux = -aux;
    }
    printf("soma = %f \n",s);
}

int main (void) {
    int op;
    while (1) {
        menu();
        printf("Escolha uma questão: ");
        scanf("%d",&op);

        if (op == 0) break;

        switch (op) {
            case 5:
                questao5 ();
            break;
            case 7:
                questao7 ();
            break;

            default:
                printf("Opção inválida !!");
            break;
        }
    }  
    return 0;
}
