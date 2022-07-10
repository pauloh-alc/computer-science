#include <stdio.h>

int main(){
	
	char caractere;
	
	printf("Entre com um caractere: ");
	scanf("%c",&caractere);
	
	if(caractere == 'a' || caractere == 'A') printf("Vogal.");
	else if(caractere == 'e' || caractere == 'E') printf("Vogal."); 
	else if(caractere == 'i' || caractere == 'I') printf("Vogal.");
	else if( caractere == 'o' || caractere == 'O') printf("Vogal.");
	else if(caractere == 'u' || caractere == 'U') printf("Vogal.");
	else printf("Nao vogal.");
return 0;
}
