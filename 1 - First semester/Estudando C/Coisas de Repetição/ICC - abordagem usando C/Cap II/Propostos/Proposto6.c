#include <stdio.h>
#include <math.h>

int main(){
	float A, B;
	int anos;
	
	A = 9000;
	B = 20000;
	
	anos = 0;
	while(B > A){
		A = A + A * 3.0/100;
		B = B + B * 1.5/100;
		anos++;
	}
	printf("%d\n", anos);
	printf("A  %f > %f  B",A,B);
	
	
return 0;
}
