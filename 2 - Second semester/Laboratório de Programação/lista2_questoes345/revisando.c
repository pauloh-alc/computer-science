#include <stdio.h>

int itemB (int x, int y)
{   
    int qtd = 0;

    if (x == 0 && y == 0) return 1;

    while (x != 0) {
        if (x % 10 == y) qtd++;
        x = x / 10;
    }
    return qtd;
}

int itemC (int x, int y) {
    int n1 = x, n2 = y;
    while (x != 0) {
        if (itemB(n1, x % 10) != itemB(n2, x % 10)) return 0;
        x = x / 10; 
    }
    return 1;
}

int itemD (int x, int y) 
{   
    if (x > y) return 0;

    while (x != 0) {
        if (x % 10 != y % 10) return 0;
        x = x / 10;
        y = y / 10; 
    }
    return 1;
}

int itemE (int x, int y) 
{   
    int aux;
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }

    while (y != 0) {
        if (itemD(x, y) == 1) {
            return 1;
        }
        y = y / 10;
    }
    return 0;
}

int palindromo (int n) 
{
    int aux = n, inv = 0;
        
    if (n >= 0 && n <= 9) return 1;

    while (aux != 0) {
        inv = inv * 10 + aux % 10;
        aux = aux / 10;
    }

    if (inv == n) return 1;
    return 0;
}

int main (void) {
    printf("%d\n",palindromo(147));
    return 0;
}
