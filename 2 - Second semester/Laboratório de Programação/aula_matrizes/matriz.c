#include <stdio.h>

void escreverMat(int mat[][3], int m) { 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}

int main (void) {
    int mat[][3] = {
                  {5,10,15},
                  {20,25,30},
                  {35,40,45},
                  {50,55,60},
                  };
    
    escreverMat(mat, 4);

    return 0;
}
