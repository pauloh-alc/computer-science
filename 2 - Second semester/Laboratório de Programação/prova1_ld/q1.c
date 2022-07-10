#include <stdio.h>

int potencia (int base, int exp) {
    int pot = 1;
    for (int i = 0; i < exp; i++) {
        pot = pot * base;
    }
    return pot;
}

int fat (int k) {
    if (k == 0) return 1;
    return k * fat (k-1);
}

float q1 (float x, int n) {
    int aux = 1, exp = 2;
    float cosx = 1;

    printf("%.1f ",cosx);
    for (int i = 0; i < n; i++) { 
         
        aux = aux * (-1);    
        
        printf("(%d) * %.1f^%d / %d! ",aux, x, exp, exp); // imprimindo para verificar
        
        cosx = cosx + aux * (potencia(x, exp) / (float)fat(exp));
        exp = exp + 2;
    }

    return cosx;
}

int main (void) {
    float x = 4;
    int n = 2;
    
    float cosx = q1(x, n);
    printf("\ncos %.1f = %f\n", x, cosx);
    
    return 0;
}
