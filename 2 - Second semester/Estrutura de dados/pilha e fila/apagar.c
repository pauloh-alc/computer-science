#include <string.h>
#include <stdio.h>

int main (void) {
    char nome1[]= "P";
    char nome2[] = "Paulo";
    
    char nome[] = "\0";

    printf("%\n\n\n",nome);
    
    printf("%d\n",strcmp(nome1, nome2));
  
    return 0;
}
