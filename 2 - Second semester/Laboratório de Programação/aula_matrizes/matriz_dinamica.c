#include <stdio.h>
#include <stdlib.h>

void imprimir (int **m, int t, int n) {
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",*(*(m+i)+j));
        }
        printf("\n");
    }
}

int main (void) {
    int **mat; // Ponteiro para ponteiro, ou vetor de ponteiro.
    /*
      4 * sizeof(tamanho de um ponteiro) ---> vai retornar o endereço do primeiro byte alocado.
      [*] --> [][][] 
      [*] --> [][][]
      [*] --> [][][]  
      [*] --> [][][]
     */
    
    // Alocando espaço para o vetor de ponteiros
    mat = (int**) malloc(4*sizeof(int*));
    
    // Alocando espaço para os vetores:
    for (int i = 0; i < 4; i++) 
        mat[i] = (int*) malloc(3*sizeof(int));
    
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] = i*15+5+j*5;    
        }
    }
    
    
     
    imprimir (mat, 4, 3);
    return 0;
}
