#include <stdio.h>
#include <stdlib.h>

int main (void) {
    FILE *f;
    
    f = fopen("meu_texto.txt", "at");
    
    if (f == NULL) {
        printf("erro ao abrir o arquivo\n");
        exit(1);
    }

    fprintf(f,"Teste 2\nTeste 3\n");

    fclose(f);

    return 0;
}
