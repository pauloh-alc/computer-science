#include <stdio.h>
#include <stdlib.h>

void q6 (float *x, int n) {
    int cont, k;
    
    for (int i = 0; i < n; i++) {
        
        k = 0;
        while (k < i && x[i] != x[k]) k++; 
        
        if (k == i) {  
            cont = 1;
            for(int j = i + 1; j < n; j++) {
                if (x[i] == x[j]) cont++;
            }

            if (cont == 1) printf("%.1f ocorre %d vez\n",x[i],cont);
            else           printf("%.1f ocorre %d vezes\n",x[i], cont);                   
        }
    }
}

int* q7 (int *x, int *y, int n) {
    int i = 0, j = 0, *z;
    
    z = (int *) malloc(sizeof(int) * 2 * n);

    for (int k = 0; k < 2 * n; k++) {
        if (i == n) {
            z[k] = y[j];
            j++;  
        }
        else if (j == n) {
            z[k] = x[i];
            i++;  
        } 
        
        if (i < n && j < n) {
            if (x[i] < y[j]) {
                z[k] = x[i];
                i++;
            }
            else {
                z[k] = y[j];
                j++;
            }
        }
    }
    return z;
}

int main (void) {
    /*
    
      Variáveis e chamada de função da q6

    float x[] = {-1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1.7};
    int n = 8;
    q6(x, n);
    
    */

    int n = 3;
    int x[] = {1, 3, 5};
    int y[] = {2, 4, 6};
    
    int *z = q7(x, y, n);
    
    for (int i = 0; i < 2 * n; i++) 
        printf("%d ",*(z+i));

    return 0;
}
