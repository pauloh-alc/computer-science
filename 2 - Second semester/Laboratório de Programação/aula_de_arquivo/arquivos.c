#include <stdio.h>
#include <stdlib.h>

int main (void) {
    FILE *f;
    char c, s[81];

    // Abre + ler arquivo .txt
    f = fopen("entrada.txt","rt");
    
    // Tratamento de erros:
    if (f == NULL) {
        printf("erro ao abrir o arquivo\n");
        exit(1);
    }
    
    
    fscanf(f,"%[^\n]",s);

    // Lendo e imprimindo na TELA:
    while ( (c = fgetc(f)) != EOF) {
        printf("%c",c);
    }
    
    fclose(f);
    printf("\n%s",s);
    return 0;
}
