#include <stdio.h>


int tamanho (char *string) {
    int i = 0;
    while (string[i] != '\0')
        i++;

    return i;
}

void concatenacao (char *string1, char *string2) {
    
    int inicio = tamanho(string1);
    
    int j = 0, i;
    for (i = inicio; string2[j] != '\0'; i++) {
        string1[i] = string2[j];
        j++;
    }
    
    string1[i] = '\0';

    //return string1;
}

//int compara (char *s1, char *s2) {

//}


int main (void) {
    char string[21];
    
    printf("Entre com uma string: ");
    scanf("%20[^\n]",string);
    
    printf("tamanho da palavra %s é: %d\n",string, tamanho(string));
    
    char string1[80] = "Paulo";
    char string2[30] = "Alencar";
    
    //char* string_completa = 
    concatenacao(string1, string2);
    
    printf("\n%s\n", string1);
    return 0;
}
