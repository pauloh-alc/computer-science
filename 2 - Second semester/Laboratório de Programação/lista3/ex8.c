#include <stdio.h>

void qt8 (int *x, int k) {
    int m, j;

    for (int i = 0; i < k; i++) {
        m = 1;
        while (i+2*m-1 < k) {
            j = 0;
            while(x[i+j] == x[i+m+j] && j < m) {
                j++;
            }

            if (j == m) {
                printf("i = %d, m = %d\n", i, m);
                for (int a = i; a < i+2*m; a++)
                    printf("%d",x[a]);
                printf("\n");
            }
            m++;
        }
    }
    
}


int main (void) {
    int x[] = {2,6,8,5,4,4,5,4,4};
    int n = 9;
    qt8(x, n);
    return 0;
}
