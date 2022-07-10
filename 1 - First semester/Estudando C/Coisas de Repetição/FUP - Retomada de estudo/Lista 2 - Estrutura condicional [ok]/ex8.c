#include <stdio.h>

int main(){
	int n1,
		n2,
		n3;
		
	printf("Entre com 3 numeros respectivamente: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1 > n2 && n1 > n3) printf("Maior numero %d.",n1);
	else if(n2 > n1 && n2 > n3) printf("Maior numero %d.",n2);
	else if(n3 > n2 && n3 > n1) printf("Maior numero %d.",n3);
	else printf("Numero sao iguais.");
	
return 0;
}
