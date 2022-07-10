#include <stdio.h>

// Função: retorna a quantidade de números que determinado número possui.
int qtd_numeros (int n)
{   
    int qtd = 0;
    do { 
        n = n / 10;
        qtd ++;   
    } while (n != 0);
   
    return qtd;
}

// Função: retorna a quantidade vezes que determinado digito aparece em um número.
int qtd_digitos (int n, int d)
{   
    int resto, qtd = 0;
    
    if (n == 0 && d == 0) return 1;
        
    while (n != 0) {
        resto = n % 10;
        n = n / 10;
        if (resto == d) qtd++;
    }
    return qtd;
}


int permutacao (int y, int x)
{   
    int qtd1, qtd2, resto, n;
    
    if (qtd_numeros(y) != qtd_numeros(x)) return 0;
        
    n = y;
    while (n != 0) {
        
        resto = n % 10;
        
        qtd1 = qtd_digitos (y, resto);
        qtd2 = qtd_digitos (x, resto);

        if (qtd1 != qtd2) return 0;
        
        n = n / 10;
    }
    return 1;   
}

int main (void) {
    int y, x, retorno;
    
    // Entrada de dados:
    do {
        printf("Entre com um número inteiro y: ");
        scanf("%d",&y);
    } while (y <= 0);

    do {
        printf("Entre com um número x: ");
        scanf("%d",&x);
    } while (x <= 0);
    
    retorno = permutacao(y, x);
    printf("%d\n", retorno);
    
    return 0;
}
