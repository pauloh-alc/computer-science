#include <stdio.h>

void q4 (int *a, int n) {
    int cont, sinalizador = 0;

    for (int i = 0; i < n; i++) {
        cont = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) cont++;
            
            if (cont > n/2) {
                printf("Elemento majoritário = %d\n",a[i]);
                sinalizador = -1;
                break; 
            }
        }
        if (sinalizador == -1) break;
    }
    if (sinalizador != -1) printf("Vetor não possui elemento majoritário.\n");
}

int main (void) {
    int n = 8;
    int a[] = {8, 8, 9, 9, 9, 5, 5, 5};
    q4(a, n);

    return 0;
}
