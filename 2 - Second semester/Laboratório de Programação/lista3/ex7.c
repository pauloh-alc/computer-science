#include <stdio.h>
#include <stdlib.h>

int* q7 (int *x, int *y, int n)
{   
    int *z = (int*) malloc (sizeof(int) * 2 * n);
     
    int i = 0, j = 0;
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
    int x[] = {1, 3, 4};
    int y[] = {2, 5, 6};

    int *z =  q7(x,y,3);
    
    for (int i = 0; i < 6; i++) 
        printf("%d ",*(z+i));


    return 0;
}
