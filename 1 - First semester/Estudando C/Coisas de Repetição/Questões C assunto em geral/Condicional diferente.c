#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	
	printf("Enter with any integer number:");
	scanf("%d",&n);
//   codition        case True 	                             case False 
	n < 0 ? printf("The value entered is negative.") : printf("The value entered is positive."); 
				
return 0;
}
