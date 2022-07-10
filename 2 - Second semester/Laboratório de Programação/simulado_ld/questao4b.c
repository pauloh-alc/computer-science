#include <stdio.h>

int b (int n) 
{   
    int pot, cont = 0, j = 1;
    
    while (cont < n) {
        pot = 2;
        while (pot - 1 <= j) {
            if (pot - 1 == j) {
                int i;
                for (i = 2; i <= j / 2; i++) {
                    if (j % i == 0) break;
                }
                if(i == j / 2 + 1) {
                    printf("%d é número de mersenne e tbm é primo \n",j);
                    cont++;
                }
            }
            pot = pot * 2;
        }
        j++;
    }
}

int main (void) {
    int n;

    scanf("%d",&n);
    b(n);   
    return 0;
}
