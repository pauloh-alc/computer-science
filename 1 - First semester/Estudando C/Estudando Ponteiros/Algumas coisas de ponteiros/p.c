#include <stdio.h>
	void exibe (char s[])
	{
		// *s já acessa o conteúdo do prinmeiro conteúdo da string;
		while (*s){ // *s != '\0';
			putchar(*(s++));
		}
	}
int main ()
{
	
	char *p = "Paulo Henrique Diniz de Lima Alencar.";
	
	exibe(p);
	return 0;
}
