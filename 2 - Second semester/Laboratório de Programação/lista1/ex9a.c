#include <stdio.h>

int main (void) {
    int n, i, fat = 1;
    do {
        printf("Entre com um número n, onde n >= 0: ");
        scanf("%d",&n);
    } while (n < 0);

    fat = 1;
    for (i = n; i > 0; i--) {
        fat = fat * i;
    }
    printf("fatorial de %d! é: %d\n", n, fat);

    return 0;
}
