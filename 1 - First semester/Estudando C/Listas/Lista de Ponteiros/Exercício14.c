#include <stdio.h>
	
	void putS (char *s)
	{
		char *i;
		
		i = &s[0];
		while (*i != '\0') {
			char c = *i;
			putc(c, stdout);
		i++;
		}
	}	
int main ()
{
	char s[] = "Paulo Henrique";
	
	putS (s);
	return 0;
}
