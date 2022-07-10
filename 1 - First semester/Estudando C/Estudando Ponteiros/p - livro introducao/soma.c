#include <stdio.h>
	float soma (float *g, float *h)
	{
		float r;
		
		r = *g + *h;
		
		return r;
	}
int main ()
{
	float a = 2.4, b = 4.2;	  // Variáveis comuns.
	float *g,*h; // Apontadores.
	
	 // g agora aponta para a. g --> a
	 // h agora aponta para b. h --> b
	 
	float r = soma (&a, &b);
	
	printf("%f\n",r);
	return 0;
}
