#include <stdio.h>

// s --> soma, s armazena o endereço de soma
// p --> produto, p armazena o endereço de produto

// *s  - acessa / modifica o valor que está armazenado no endereço que s armazena 
//  s  - endereço de soma
//  &s - endereço de s
 
void soma_produto (int* s, int* p, int a, int b)
{
    *s = a + b;
    *p = a * b;
}

int main (void) {
    
    int x, y;
    int soma, produto;

    printf("Entre com um numero x e y respectivamente, separados por ',': ");
    scanf("%d,%d",&x,&y);

    soma_produto(&soma, &produto, x, y);
    
    printf("%d + %d = %d \n", x, y, soma);
    printf("%d * %d = %d \n", x, y, produto);

    return 0;
}
