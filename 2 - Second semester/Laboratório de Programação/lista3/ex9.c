#include <stdio.h>

int qt9 (int *v, int n) {
    int i = 0, ip = 0, a, b;

    for (int k = 1; k <= n; k++) {
        a = 1;
        b = 1;
        i = 0;
            while (i < n && (a == 1 || b == 1)) {
                if (i % k == 0)
                    ip = (ip+1) % 2;
                if (v[i] % 2 != ip)
                    a = 0;
                if (v[i] % 2 != (ip+1) % 2)
                    b = 0;

                i++;
            }
            if (a == 1 || b == 1)
                return k;
    }
    return 0;
}

int main (void) {
    int x[] = {1, 3, 6, 8, 9, 11, 2, 4, 1, 7, 6, 8};
    printf("%d\n",qt9(x,12));
    
    int x2[] = {2, 1, 4, 7, 8, 9, 12};
    printf("%d\n",qt9(x2,7));


    int x3[] = {1, 2, 4};
    printf("%d\n",qt9(x3,3));
    
    int x4[] = {4, 2, 3, 1, 6, 4, 2, 9, 3};
    printf("%d\n",qt9(x4,9));
    return 0;
}
