#include <stdio.h>
	int ordena (int *n1, int *n2, int *n3)
	{
		int aux;
						  
		if (*n1 < *n3 && *n3 < *n2) { // n1, n3, n2
			aux = *n2;
			*n2 = *n3; // [n1,n2,n3]
			*n3 = aux;
		}
		else if (*n2 < *n1 && *n1 < *n3) { // n2, n1, n3
			aux = *n1;
			*n1 = *n2; // [n1,n2,n3]
			*n2 = aux;
		}								
		else if (*n2 < *n3 && *n3 < *n1) { // n2, n3, n1
			aux = *n1;
			*n1 = *n2;  // n1, n3 ,n2
			*n2 = aux;
			
			aux = *n2;
			*n2 = *n3; // [n1,n2,n3]
			*n3 = aux;
		}
		else if (*n3 < *n1 && *n1 < *n2) { // n3, n1, n2
			aux = *n2;
			*n2 = *n1;  // n3, n2, n1
			*n1 = aux;
			
			aux = *n1;
			*n1 = *n3; // [n1,n2,n3]
			*n3 = aux;
		}
		else if (*n3 < *n2 && *n2 < *n1) { // n3, n2, n1
			aux = *n1;
			*n1 = *n3; // [n1,n2,n3]
			*n3 = aux;
		}
		
		if (*n1 == *n2 && *n2 == *n3)			         return 1;
		else if (*n1 == *n2 || *n1 == *n3 || *n2 == *n3) return 2;
		else 								             return 3;
	}
int main ()
{
	int a, b, c;
	
	printf("n1: ");
	scanf("%d",&a);
	printf("n2: ");
	scanf("%d",&b);
	printf("n3: ");
	scanf("%d",&c);
	
	int retorno = ordena (&a, &b, &c);
	
	printf("retorno = %d \n",retorno);
	printf("%d, %d, %d \n",a,b,c);
	
	return 0;
}
