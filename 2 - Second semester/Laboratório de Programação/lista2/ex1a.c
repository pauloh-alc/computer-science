#include <stdio.h>

int fat (int n)
{
    if (n == 0) return 1;

    return fat(n-1) * n;
}

// Explicação:...................................
// Caso base: 0! = 1
//
// fat(3) = 3 * 2 * 1
// fat(4) = 4 * 3 * 2 * 1 = fat(3) * 4
// fat(5) = fat(4) * 5
// fat(6) = fat(5) * 6
// fat(n) = versão mais simples --> fat(n-1) * n
// ..............................................

int main (void) {
    int n;
        
    printf("Entre com um valor inteiro n, onde n >=0 para saber o fatorial: ");
    scanf("%d",&n);
    
    int fatorial = fat (n);

    printf("fatorial de %d! é: %d\n",n,fatorial);
    

    //fat(4) = 4 * 3 * 2 * 1 = 24

    // main() --> fat(4) 6 * n=4 == 24
    //        --> fat(3) 2 * n=3 == 6
    //        --> fat(2) 1 * n=2 == 2
    //        --> fat(1) 1 * n=1 == 1
    //        --> fat(0) return 1
    // 
       
    return 0;
}
