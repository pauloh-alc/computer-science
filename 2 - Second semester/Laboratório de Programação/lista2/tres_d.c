#include <stdio.h>

int itemD (int numero1, int numero2)
{
    if (numero1 > numero2) return 0;

    while (numero1 != 0) {
        if (numero1 % 10 != numero2 % 10) return 0;
        numero1 = numero1 / 10;
        numero2 = numero2 / 10;
    }
    
    return 1;
}

int main (void) {
        printf("%d",itemD(55, 4555));
    return 0;
}
