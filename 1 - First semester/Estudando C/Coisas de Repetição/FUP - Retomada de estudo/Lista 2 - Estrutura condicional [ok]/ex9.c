#include <stdio.h>

int main(){
	int n1,
		n2,
		n3;
		
	printf("Entre com 3 numeros respectivamente: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	printf("Ordem decrescente:\n");
	if(n1 > n2 && n1 > n3 && n2 > n3) printf("%d, %d, %d",n1,n2,n3);
	else if(n1 > n3 && n1 > n2 && n3 > n2) printf("%d, %d, %d",n1,n3,n2);
	else if(n2 > n1 && n2 > n3 && n1 > n3) printf("%d, %d, %d",n2,n1,n3);
	else if(n2 > n3 && n2 > n1 && n3 > n1) printf("%d, %d, %d",n2,n3,n1);
	else if(n3 > n1 && n3 > n2 && n1 > n2) printf("%d, %d, %d",n3,n1,n2);
	else if(n3 > n2 && n3 > n1 && n2 > n1) printf("%d, %d, %d",n3,n2,n1);
	else printf("Numeros digitados sao iguais !!");
	
	printf("\nOrdem crescente:\n");
	if(n1 > n2 && n1 > n3 && n2 > n3) printf("%d, %d, %d",n3,n2,n1);
	else if(n1 > n3 && n1 > n2 && n3 > n2) printf("%d, %d, %d",n2,n3,n1);
	else if(n2 > n1 && n2 > n3 && n1 > n3) printf("%d, %d, %d",n3,n1,n2);
	else if(n2 > n3 && n2 > n1 && n3 > n1) printf("%d, %d, %d",n1,n3,n2);
	else if(n3 > n1 && n3 > n2 && n1 > n2) printf("%d, %d, %d",n2,n1,n3);
	else if(n3 > n2 && n3 > n1 && n2 > n1) printf("%d, %d, %d",n1,n2,n3);
	else printf("Numeros digitados sao iguais !!");
	 
return 0;
}
