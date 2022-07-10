#include <stdio.h>

int main (void) {
    printf("int %d    char %d \n", sizeof(int), sizeof(char));
    printf("a = %d\n",'a');
    printf("A = %d\n",'A');


    for (char c = 'A'; c <= 'z'; c++)
        printf("%d %c\n",c, c);
    

    char cidade[80] = {'R', 'u', 's', 's', 'a', 's', '\0'};
    
    printf("digite um nome: ");
    scanf("%10[0123456789]",cidade);

    printf("%s\n",cidade);

    return 0;
}
