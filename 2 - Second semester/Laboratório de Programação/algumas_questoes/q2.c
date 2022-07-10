#include <stdio.h>

void q2(int *x, int n) {
    int k, j, i, f, maior = 0;

    for (k = 0; k < n; k++) {
   
        j = 0; 
        while (x[k+j] < x[k+j+1] && k+j < n-1) {
            j++;
        }
        
        if (j > maior) {
            maior = j;
            i = k;   // posição inicial do segmento
            f = k+j; // posição final do segmento
        }
    }
    
    for (int a = i; a <= f; a++) 
        printf("%d ",x[a]);
}

int main (void) {
    int x[] = {5, 8, 9, 19, 4, 7, 11, 5, 6};
    q2(x,9);
    return 0;
}
