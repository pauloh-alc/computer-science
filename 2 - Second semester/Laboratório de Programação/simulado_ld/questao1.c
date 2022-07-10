#include <stdio.h>

int irmaos (int x, int y) {
    int soma_x = 0;
    int soma_y = 0;
    /*    
    while (x != 0) {
        soma_x = soma_x + x % 10;
        x = x / 10;        
    }

    while (y != 0) {
        soma_y = soma_y + y % 10;
        y = y / 10;
    }
    */

    while (x != 0 || y != 0) {
        soma_x = soma_x + x % 10;
        soma_y = soma_y + y % 10;
        x = x / 10;
        y = y / 10;
    }

    if (soma_x == soma_y) return 1;
    return 0;
}

int main (void) {
    printf("return = %d\n",irmaos(253, 46));
    return 0;
}
