#include <stdio.h>
#include <stdlib.h>
int *q6 (int *x, int *y, int n, int m) {
    int *z, k, i = 0, j = 0;

    z = (int*) malloc (sizeof(int) * (m+n));
    
    for (k = 0; k < m+n; k++) {
        
            
            if (i == n) {
                if (z[k-1] != y[j]) {
                    z[k] = y[j];
                    j++;
                }
                else {
                    j++;
                    k--;
                }
            }
            else if (j == m) {
                if (z[k-1] != x[i]) {
                    z[k] = x[i];
                    i++;
                }
                else {
                    i++;
                    k--;
                }
            }
        
         if (i < n && j < m) {
            
            if (x[i] <= y[j]) {
                
                if (k != 0) {
                    if (z[k-1] != x[i]) {
                        z[k] = x[i];
                        i++;
                    }
                    else {
                        i++;
                        k--;
                    }
                }
                else {
                    z[k] = x[i];
                    i++;
                }
            }
            else {
                if (k != 0) {
                    if (z[k-1] != y[j]) {
                        z[k] = y[j];
                        j++;    
                    }
                    else {
                        j++;
                        k--;
                    }
                }
                else {
                    z[k] = y[j];
                    j++;
                }
            }
        }   
    }
   return z;
}

int main (void) {
    int n = 4; // x
    int m = 5; // y
    //int x[] = {1, 2, 3, 6};
    int y[] = {1, 3, 4, 9, 11};
    int x[] = {4,5,7,8};
    int *z = q6(x,y,n,m);

    for (int i = 0; i < m+n; i++)
       printf("%d ",z[i]); 

    return 0;
}
