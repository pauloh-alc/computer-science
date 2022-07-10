#include <stdio.h>
#include <stdlib.h>

void imprimir (int **m, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

int** trans (int **m, int l, int c) {
    int** trp;

    trp = (int**) malloc (c * sizeof(int*));

    for (int i = 0; i < l; i++) 
        trp[i] = (int*) malloc(l * sizeof(int));

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            trp[j][i] = m[i][j];    
        }
    }
    
    return trp;
}    

int main (void) {
    /*
     * L Colunas    0   1   3
       i        0  [5, 10,  15 ]
       n        1  [20, 25, 30 ]
       h        2  [35, 40, 45 ]
       a
       s        3  [50, 55, 60 ]
    */
    
    int **m, **trp;
    
    m = (int**) malloc (4 * sizeof(int*));
    
    for (int i = 0; i < 4; i++) 
        m[i] = (int*) malloc (3 * sizeof(int));
    
    // i - Linhas
    // j - Colunas
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] = i*15+5 + j*5;
        }
    }
    
    imprimir (m, 4, 3);
    
    printf("\n\n");
    
    trp = trans (m, 4, 3);
    imprimir (trp, 3, 4);
    return 0;
}
