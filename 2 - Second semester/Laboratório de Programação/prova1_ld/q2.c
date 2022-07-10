#include <stdio.h>


int main (void) {
    int n, i, m, numero, novo_m, div;

    printf("Entre com um n: ");
    scanf("%d",&n);

    printf("Entre com o 1o. numero da sequencia: ");
    scanf("%d",&m);

    i = 1;
    while (i < n) {
        printf("Entre com o %do. numero da sequencia: ",i+1);
        scanf("%d",&numero);
        i = i + 1;
    
        div = 1;

        while (div <= n && div <= numero) {
            if (m % div == 0 && numero % div == 0) {
                novo_m = div;
            }
            div = div + 1;
        }
        m = novo_m;
    }
    
    printf("%d\n", m);

    return 0;
}
