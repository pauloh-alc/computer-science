#include <stdio.h>

void adicionaX1 (int x, int b) {
    b = b + x;
}

void adicionaX2(int x, int *b) {
    *b = *b + x;
}

int main (void) {
    int a = 0;
    
    adicionaX1(10, a);
    printf("a = %d\n",a);

    adicionaX2(10, &a);
    printf("a = %d\n",a);
    
    return 0;
}
