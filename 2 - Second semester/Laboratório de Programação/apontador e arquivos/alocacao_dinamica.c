#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void) {
    int tamChar;
    char* g[4]; // vetor de apontadores. 
    /*    
    [0] -->
    [1] -->
    [2] -->
    [3] -->
    */   

    tamChar = sizeof(char);

    g[0] = (char*) malloc ((strlen("Joao ama Maria") + 1) * tamChar); 
    strcpy(g[0],"Joao ama Maria");

    g[1] = (char*) malloc ((strlen("Maria ama pedro") + 1) * tamChar);
    strcpy(g[1],"Maria ama pedro");

    g[2] = (char*) malloc ((strlen("Ana ama quem ama Maria") + 1) *tamChar);
    strcpy(g[2],"Ana ama quem ama Maria");

    g[3] = (char*) malloc ((strlen("Quem ama Ana?") + 1) *tamChar);
    strcpy(g[3],"Quem ama Ana?");
    

    printf("%s\n",g[0]); 
    printf("%s\n",g[1]);
    printf("%s\n",g[2]);
    printf("%s\n",g[3]);
    return 0;
}
