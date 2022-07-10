#include <stdio.h>

int main(){
	int A,B,C,D;
	int i;
	for(i = 0; i < 5; i++){
		printf("Entre com os valores de A,B,C,D respectivamente: ");
		scanf("%d%d%d%d",&A,&B,&C,&D);
		printf("Decrescente: \n");
		if(A > B && A > C && A > D){
			if(B > C && B > D){
				if(C > D){
					printf("%d,%d,%d,%d",A,B,C,D);
				}
				else{
					printf("%d,%d,%d,%d",A,B,D,C);
				}
			}
			else if(C > B && C > D){
				if(B > D){
					printf("%d,%d,%d,%d",A,C,B,D);
				}
				else{
					printf("%d,%d,%d,%d",A,C,D,B);
				}
			}
			else if(D > C && D > B){
				if(C > B){
					printf("%d,%d,%d,%d",A,D,C,B);
				}
				else{
					printf("%d,%d,%d,%d",A,D,B,C);
				}
			}
		}
		else if(B > A && B > C && B > D){
			if(A > C && A > D){
				if(C > D){
					printf("%d,%d,%d,%d",B,A,C,D);
				}
				else{
					printf("%d,%d,%d,%d",B,A,D,C);
				}
			}
			else if(C > A && C > D){
				if(A > D){
					printf("%d,%d,%d,%d",B,C,A,D);
				}
				else{
					printf("%d,%d,%d,%d",B,C,D,A);
				}
			}
			else if(D > A && D > C){
				if(A > C){
					printf("%d,%d,%d,%d",B,D,A,C);
				}
				else{
					printf("%d,%d,%d,%d",B,D,C,A);
				}
			}
		}
		else if(C > A && C > B && C > D){
			if(A > B && A > D){
				if(B > D){
					printf("%d,%d,%d,%d",C,A,B,D);	
				}
				else{
					printf("%d,%d,%d,%d",C,A,D,B);	
				}
			}
			else if(B > A && B > D){
				if(A > D){
					printf("%d,%d,%d,%d",C,B,A,D);
				}
				else{
					printf("%d,%d,%d,%d",C,B,D,A);
				}
			}
			else if(D > A && D > B){
				if(A > B){
					printf("%d,%d,%d,%d",C,D,A,B);
				}
				else{
					printf("%d,%d,%d,%d",C,D,B,A);
				}
			}
		}
		else if(D > A && D > B && D > C){
			if(A > B && A > C){
				if(B > C){
					printf("%d,%d,%d,%d",D,A,B,C);	
				}
				else{
					printf("%d,%d,%d,%d",D,A,C,B);
				}
			}
			else if(B > A && B > C){
				if(A > C){
					printf("%d,%d,%d,%d",D,B,A,C);
				}
				else{
					printf("%d,%d,%d,%d",D,B,C,A);
				}
			}
			else if(C > A && C > B){
				if(A > B){
					printf("%d,%d,%d,%d",D,C,A,B);
				}
				else{
					printf("%d,%d,%d,%d",D,C,B,A);
				}
			}
		}
		printf("\n");
	}
return 0;
}
