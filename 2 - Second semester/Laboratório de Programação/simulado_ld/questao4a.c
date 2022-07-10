#include <stdio.h>

int a (int n) 
{   
    int pot = 2;

    while (pot - 1 <= n) {
        if (pot - 1 == n) return 1;
        pot = pot * 2;
    }
    return 0;
}

int main (void) {
    int n;

    scanf("%d",&n);
    printf("%d\n",a(n));    
    return 0;
}
