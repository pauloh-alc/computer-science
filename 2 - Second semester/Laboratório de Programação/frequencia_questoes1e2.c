// Discente: Paulo Henrique Diniz de Lima Alencar
// Ciência da computação.
// matrícula: 494837

#include <stdio.h>

int q1 (int A[][4], int m, int n) {
    int cont1, cont2, cont3;
    for (int i = 0; i < m; i++) {
        cont1 = 0;
        cont2 = 0;
        cont3 = 0;
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 0) cont1++;
            if (A[j][i] == 0) cont2++;
            if (A[i][j] == 1) cont3++;
        }
        if (cont1 != n-1 || cont2 != n-1 || cont3 != 1) return 0;
    }
    return 1;
}

int q2a (int A[][4], int n) {
    int i, j, soma = 0, soma_p = 0, soma_s = 0, soma_l, soma_c;
    
    for (int i = 0; i < n; i++) soma += A[0][i];
    
    for (i = 0; i < n; i++) {
        soma_l = 0;
        soma_c = 0;
        for (j = 0; j < n; j++) {
            if (i == j) soma_p += A[i][j];
            if (i+j == n-1) soma_s += A[i][j];
            soma_l += A[i][j];
            soma_c += A[j][i];
        }
        if (soma != soma_l || soma != soma_c) return 0;   
    }
    
    if (soma != soma_p || soma != soma_s) return 0;
    return 1;
}


int main (void) {
    /*
    
    // Teste da 1° questão:
    
    int A[][4] = {
                 {0,1,0,0},
                 {0,0,1,0},
                 {1,0,0,0},
                 {0,0,0,1},
                 };
    
    printf("%d",q1(A,4,4));    
    */
    
    
    // Teste da questão 2 - item a)
    
     int A[][3] = {  
                 {8,0,7},
                 {4,5,6},
                 {3,10,2},
                 };
    
    printf("%d\n",q2a(A,3));
    
    return 0;
}
