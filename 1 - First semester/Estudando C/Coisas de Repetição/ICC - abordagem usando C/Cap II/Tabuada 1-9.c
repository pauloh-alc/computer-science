#include <stdio.h>

int main(){
	int i,j,tabuada;
	for(i = 1; i <=9; i++){
		for(j = 0; j <= 9; j++){
			tabuada = i*j;
			printf("%d x %d = %d.\n", i, j, tabuada);
		}
		printf("\n");
	}

return 0;
}
