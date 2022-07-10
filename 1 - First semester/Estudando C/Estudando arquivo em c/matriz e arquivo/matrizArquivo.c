#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int m[3][3];
	int i, j;
	FILE* p;
	
	p = fopen ("arquivo.txt", "r");
	if (p == NULL) {
		printf("Erro na abertura do arquivo !! \n");
		exit(1);
	}
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			fscanf(p,"%d",&m[i][j]);
		}
	}
	fclose(p);
	
	for (i = 0; i < 3; i++) {
		printf("| ");
		for (j = 0; j < 3; j++) {
			printf(" %d ",m[i][j]);
		}
		printf(" |\n");
	}
	
	return 0;
}
