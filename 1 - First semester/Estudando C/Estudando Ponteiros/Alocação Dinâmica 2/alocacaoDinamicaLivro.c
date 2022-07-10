#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int tamChar;
	char* g[4];  // vetor de apontadores para strings.
	
	tamChar = sizeof(char);
	
	g[0] = (char*) malloc ((strlen("Joao Ama Maria") + 1) * tamChar);
	strcpy (g[0], "Joao Ama Maria");
	g[1] = (char*) malloc ((strlen("Maria ama Pedro") + 1) * tamChar);
	strcpy (g[1], "Maria Ama Pedro");
	g[2] = (char*) malloc ((strlen("Ana ama quem ama Maria") + 1) * tamChar);
	strcpy (g[2], "Ana ama quem ama Maria");
	g[3] = (char*) malloc ((strlen("Quem ama Ana?") + 1) * tamChar);
	strcpy (g[3], "Quem ama Ana?");
	
	printf("%p \n",&g[0]);
	printf("%p \n",&g[1]);
	printf("%p \n",&g[2]);
	printf("%p \n",&g[3]);
	
	printf("%s \n",g[0]);
	printf("%s \n",g[1]);
	printf("%s \n",g[2]);
	printf("%s \n",g[3]);
	return 0;
}
