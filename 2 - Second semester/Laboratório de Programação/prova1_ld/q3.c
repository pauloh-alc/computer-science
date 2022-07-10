#include <stdio.h>
#include <stdlib.h>

int* q3(int *x, int *y, int *z, int n) {
    int *m;
    int i = n-1, j = n-1, f = n-1;
    
    m = (int*) malloc (sizeof(int) * 3 * n);
    
    for (int k = 0; k < 3*n; k++) {
        if (i == -1 && j == -1) {
            m[k] = z[f];
            f--;
        }
        else if (i == -1 && f == -1) {
            m[k] = y[j];
            j--;
        }
        else if (f == -1 && j == -1) {
            m[k] = x[i];
            i--;
        }      
        else  if (i == -1) {
            if (z[f] > y[j]) {
                m[k] = z[f];
                f--;
            }
            else {
                m[k] = y[j];
                j--;
            }
        }
        else if (j == -1) {
            if (z[f] > x[i]) {
                m[k] = z[f];
                f--;
            }
            else {
                m[k] = x[i];
                i--;
            }
        }
        else if (f == -1) {
            if (y[j] > x[i]) {
                m[k] = y[j];
                j--;
            } 
            else {
                m[k] = x[i];
                i--;
            }
        }


        if (i > -1 && j > -1 && f > -1) {
            if (x[i] >= y[j] && x[i] >= z[f]) {
                m[k] = x[i];
                i--;
            }
            else if (y[j] >= x[i] && y[j] >= z[f]) {
                m[k] = y[j];
                j--;
            }    
            else {
                m[k] = z[f];
                f--;
            }
        }
    }
    return m;
}

int main (void) {
    //int x[] = {1, 3, 8};
    int y[] = {1, 3, 4};
    int z[] = {0, 2, 5};
    int x[] = {8, 9, 11};
    int n = 3;
    int *m = q3 (x, y, z, n);

    for (int i = 0; i < 3*n; i++)
        printf("%d ",*(m+i));
    return 0;
}
