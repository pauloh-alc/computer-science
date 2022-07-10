#include <stdio.h>

int qtd_numeros (int n)
{   
    int qtd = 0;

    if (n == 0) return 1;

    while (n != 0) {
        n = n / 10;
        qtd++; 
    }
    return qtd;
}

int potencia (int base, int exp)
{   
    int i, pot = 1;

    for (i = 0; i < exp; i++) {
        pot = pot * base;
    }

    return pot;
}


int sufixo (int y, int x)
{   
    int qtd_x;

    qtd_x = qtd_numeros (x);

    if (y % potencia(10, qtd_x) == x) return 1;
    else                              return 0;
}

int main (void) {
    int y, x;

    do {
        printf("Entre com um número y, onde y > 0: ");
        scanf("%d",&y);
    } while (y <= 0); 
    
    do {
        printf("Entre com um número x, onde x > 0: ");
        scanf("%d",&x);
    } while (x <= 0);
    
    printf("%d\n",sufixo(y, x));
    return 0;
}
