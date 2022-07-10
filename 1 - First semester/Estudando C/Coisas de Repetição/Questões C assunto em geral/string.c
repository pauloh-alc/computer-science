#include <stdio.h>


int main(){
	char string[30], R[30];
	int i,j,n,N;
	
	printf("Entre com um string: ");
	gets(string);
	
	printf("Entre com um numero N: ");
	scanf("%d",&N);
	
	i = 0;
	n = 0;
	while(string[i] != '\0'){
		for(j = 1; j <= N; j++){
			R[n] = string[i];
			n++;
		}
	i++;
	}
	R[n] = '\0';
	
	printf("\n%s",R);
return 0;
}
