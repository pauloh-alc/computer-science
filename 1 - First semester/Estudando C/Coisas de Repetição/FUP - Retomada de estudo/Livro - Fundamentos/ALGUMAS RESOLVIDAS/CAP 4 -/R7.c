#include <stdio.h>

int main(){
	
	int I;
	float A,B,C;
	
	printf("Entre com o valor de 'I' inteiro entre [1-3]: ");
	scanf("%d",&I);
	printf("Entre com valores 'reais' para 'A' , 'B' , C': ");
	scanf("%f%f%f",&A,&B,&C);
	
	if(I == 1){
			if(A < B && A < C){
				if(B < C){
					printf("%.1f,%.1f,%.1f",A,B,C);
				}
				else{
					printf("%.1f,%.1f,%.1f",A,C,B);	
				}
			}
			else if(B < A && B < C){
				if(A < C){
					printf("%.1f,%.1f,%.1f",B,A,C);	
				}
				else{
					printf("%.1f,%.1f,%.1f",B,C,A);	
				}
			}
			else if(C < A && C < B){
				if(A < B){
					printf("%.1f,%.1f,%.1f",C,A,B);		
				}
				else{
					printf("%.1f,%.1f,%.1f",C,B,A);	
				}
			}
			else{
				printf("Erro: os numeros digitados sao iguais !!");
			}
	}
	else if(I == 2){
		if(A > B &&  B > C){
			printf("%.1f,%.1f,%.1f",A,B,C);
		}
		else if(A > C && C > B){
			printf("%.1f,%.1f,%.1f",A,C,B);
		}
		else if(B > A && A > C){
			printf("%.1f,%.1f,%.1f",B,A,C);
		}
		else if(B > C && C > A){
			printf("%.1f,%.1f,%.1f",B,C,A);
		}
		else if(C > A && A > B){
			printf("%.1f,%.1f,%.1f",C,A,B);
		}
		else if(C > B && B > A){
			printf("%.1f,%.1f,%.1f",C,B,A);
		}
	}
	else if(I == 3){
		if(A > B && A > C){
			printf("%.1f,%.1f,%.1f",C,A,B);
		}
		else if(B > A && B > C){
			printf("%.1f,%.1f,%.1f",C,B,A);
		}
		else if(C > A && C > B){
			printf("%.1f,%.1f,%.1f",B,C,A);
		}
		else{
			printf("Erro: os numeros digitados sao iguais !!");
		}
	}
return 0;
}
