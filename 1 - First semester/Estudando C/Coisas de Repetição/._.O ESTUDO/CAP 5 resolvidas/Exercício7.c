#include <stdio.h>

int main(){
	// Exercício resolvidos - 7
	int i, num1, num2, termo;
	
	num1 = 1;
	num2 = 0;
	
	printf("%d - ",num2); // imprime o '0'
	
	for(i = 3; i <= 8; i++){
		
	 	termo = num1 + num2;
	 	printf("%d - ",termo);
	 	
	 	num1 = num2;
	 	num2 = termo;
	 	
	}

return 0;
}
