#include <stdio.h>

void q6 (float *x, int n) {
    int cont, j;
    
    for (int i = 0; i < n; i++) {

        j = 0;
        while (j < i && x[i] != x[j]) j++;
        
        if (j == i) {
            cont = 1;
            for (int j = i + 1; j < n; j++) {
                
                if (x[i] == x[j]) 
                    cont++;
            }
                if (cont == 1) printf("%.1f ocorre %d vez\n",x[i], cont);
                else           printf("%.1f ocorre %d vezes \n", x[i], cont);
        }
    }
}

int main (void) {
    float x[] = {-1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1.7};
    q6(x,8);
    return 0;
}
