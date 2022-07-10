#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int a (int A[][4], int n) {
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
    int A[][4] = {  
                 {8,0,7},
                 {4,5,6},
                 {3,10,2},
                 };
    
    printf("%d\n",a(A,3));

    return 0;
}
