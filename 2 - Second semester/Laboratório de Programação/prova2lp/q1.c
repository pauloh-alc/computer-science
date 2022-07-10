#include <stdio.h>
#include <string.h>


int minha_strcmp(char* s1, char* s2) {
    
    while (*s1 != '\0' || *s2 != '\0') {
        
        if (*s1 != *s2) {
            if (*s1 > *s2) return  1;
            else           return -1;
        }
        
        s1 += 1;
        s2 += 1;
    }
    return 0;
}

int main (void) {
    
    printf("\n1° CASO:\n");
    printf("retorno strcmp.......: %d\n",strcmp("Amanda", "Ama"));
    printf("retorno minha_strcmp.: %d\n",minha_strcmp("Amanda","Ama"));

    printf("\n2° CASO:\n");
    printf("retorno strcmp.......: %d\n",strcmp("ran", "ranato"));
    printf("retorno minha_strcmp.: %d\n",minha_strcmp("ran","ranato"));
    
    printf("\n3° CASO:\n");
    printf("retorno strcmp.......: %d\n",strcmp("1234", "123"));
    printf("retorno minha_strcmp.: %d\n",minha_strcmp("1234","123"));
    return 0;
}
