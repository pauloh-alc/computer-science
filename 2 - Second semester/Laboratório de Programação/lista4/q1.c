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

int main (void) {
    int A[][4] = {
                 {0,1,0,0},
                 {0,0,1,0},
                 {1,0,0,0},
                 {0,0,0,1},
                 };
    
    printf("%d",q1(A,4,4));    
    return 0;
}
