// Discente: Paulo Henrique Diniz de Lima Alencar.
#include <stdio.h>
#include <stdlib.h>


int q1 (int **A, int m, int n) {
    int cont0, cont1;

    printf("q1: ");
    for (int i = 0; i < m; i++) {
        cont0 = 0;
        cont1 = 0;
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 0)
                cont0++;
            if (A[i][j] == 1)
                cont1++;
        }
        if (cont0 != n-1 || cont1 != 1)
            return 0;
    }
    
    for (int j = 0; j < n; j++) {
        cont0 = 0;
        cont1 = 0;
        for (int i = 0; i < m; i++) {
            if (A[i][j] == 0)
                cont0++;
            if (A[i][j] == 1)
                cont1++;
        }
        if (cont0 != m-1 || cont1 != 1)
            return 0;
    }

    return 1;
}

int q2a (int **M, int n) {
    int s = 0, s1 = 0, i, j;
    
    printf("q2a: ");

    // Diagonal principal
    for (i = 0; i < n; i++) 
        s = s + M[i][i];

    // Diagonal secundaria
    for (i = 0; i < n; i++) 
        s1 = s1 + M[i][n-1-i];
    
    if (s != s1) return 0;
    
    // Linha
    for (i = 0; i < n; i++) {
        s1 = 0;
        for (j = 0; j < n; j++) {
            s1 = s1 + M[i][j];
        }
        if (s != s1) return 0;
    }
    
    // Coluna
    for (j = 0; j < n; j++) {
        s1 = 0;
        for (i = 0; i < n; i++) {
            s1 = s1 + M[i][j]; 
        }
        if (s != s1) return 0;
    }
    
    return 1;
}

int main (void) {
    int **A, i, j;
    
    A = (int**) malloc (4*sizeof(int*));
    for (i = 0; i < 4; i++){
        A[i] = (int*) malloc (4*sizeof(int));
    }

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            A[i][j] = 0;

    A[0][1] = 1;
    A[1][2] = 1;
    A[2][0] = 1;
    A[3][3] = 1;

    printf("%d\n",q1(A, 4, 4));
    printf("%d\n",q2a(A, 4));
    return 0;
}
