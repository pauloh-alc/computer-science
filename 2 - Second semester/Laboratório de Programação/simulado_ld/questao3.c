#include <stdio.h>


void hipotenusas (int n) 
{
    int a = 1, b = 4, c = 3;

    while (a <= n) {  
        printf("a = %d\n",a);
        for (b = 1; b < a; b++) {
            printf("b = %d\n",b);
            for (c = 1; c < a; c++) {
                printf("c = %d\n", c);
                if (a*a == b*b + c*c) {           
                    printf("a = %d, b = %d, c = %d \n", a, b, c);     
                } 
            }
        }
    a += 1;            
    }
}    


int main (void) {
    
    int n;
    while (1) {
        printf("Entre com um n, onde n >= 1: ");
        scanf("%d",&n);
        if (n >= 1) break;
    }

    hipotenusas (n);

    return 0;
}
