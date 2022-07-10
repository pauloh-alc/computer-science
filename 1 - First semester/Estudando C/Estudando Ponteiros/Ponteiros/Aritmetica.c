#include <stdio.h>
#define SIZE 20
int main ()
{
	int i;
	
	char cor[SIZE] = "Vermelho";
	char *p;
	
	printf("Versao normal:\n");
	for (i = 0; cor[i] != '\0'; i++) {
		printf("%c,",cor[i]);
	}
	
	// Com ponteiros:
	printf("\nVersao com ponteiros:\n");
	
	p = cor; // Assign the adress of cor[0] to p.
	while (*p != '\0') {
		printf("%c,",*p);
	
	p += 1;
	}
	return 0;
}
