#include <stdio.h>

int fat (int n) {
    if (n == 0) return 1;
    return n * fat(n-1); 
}

void triangulo_pascal (int k)
{   
    int i, j, combinacao;
    for (i = 0; i < k + 1; i++) {
        for (j = 0; j <= i; j++) {
            combinacao = fat(i) / (fat(j) * fat(i - j));
            printf("%d ", combinacao);
        }
        printf("\n");
    }
}

int main (void) {
    int k;
    
    printf("Entre com um k inteiro: ");
    scanf("%d",&k);
    
    triangulo_pascal(k);

    return 0;
}
