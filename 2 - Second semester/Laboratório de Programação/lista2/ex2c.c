#include <stdio.h>
#include <time.h>

// Versão recursiva:
int fibonacci_1 (int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    return fibonacci_1(n-2) + fibonacci_1(n-1);
}

// Versão iterativa:
void fibonacci_2 (int n) 
{
    int f = 1, a = 0, i;
    
    if (n >= 1) printf("0 ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ",f);
        f = f + a;
        a = f - a;
    }
    printf("\n");
}


// Função principal:
int main (void) {
    clock_t tempo_inicial, tempo_final; // declaração de variáveis clock_t
    int n, i;
    
    // Entrada de dados:
    printf("Entre com um n, onde n >= 0: ");
    scanf("%d",&n);
    printf("\n");

    // # fibonacci 1:.................
    tempo_inicial = clock();
    for (i = 1; i <= n; i++) {
        printf("%d ", fibonacci_1(i));
    }
    printf("\n");
    tempo_final = clock();

 
    printf("Tempo gasto para fibonacci_1() - recusiva..: %f ms \n\n", 1000 * (double)(tempo_final - tempo_inicial) / (double)(CLOCKS_PER_SEC));
    //................................
    
    // # fibonacci 2:.................
    tempo_inicial = clock();
    fibonacci_2(n);
    tempo_final = clock();
    
    printf("Tempo gasto para fibonacci_2() - iterativa : %f ms \n\n", 1000 * (double)(tempo_final - tempo_inicial) / (double)(CLOCKS_PER_SEC));
    //................................
    
    // Função recursiva leva mais tempo.
    
    return 0;   
}
