#include <stdio.h>
#include <math.h>
	int raizes (float A, float B, float C, float *x1, float *x2)
	{
		float delta;
		delta = B * B - 4 * A * C; 
		
		if (delta > 0) {
			// 2 raizes reais e distintas
			*x1 = (-B + sqrt(delta)) / (2 * A);
			*x2 = (-B - sqrt(delta)) / (2 * A);
			return 2;
		}
		else if (delta == 0) {
			// 1 raiz real 
			*x1 = -B / (2 * A);
			*x2 = *x1;
			return 1;
		}
		else {
		    // 0 raizes reais
		    printf("Nao possui raizes R (reais) !! \n");
		    return 0;
		}
	}
int main ()
{
	float A, B, C, r1, r2;
	
	// Entrada de dados:
	while (1) {
		printf("A: "); scanf("%f",&A);
	if (A != 0) break;
	}
	printf("B: "); scanf("%f",&B);
	printf("C: "); scanf("%f",&C);
	

	int retorno = raizes (A, B, C, &r1, &r2); // x1 --> r1  e   x2 --> r2
	
	printf("%d raiz(es) R. \n",retorno);
	printf("r1 = %.2f, r2 = %.2f \n",r1,r2);

	return 0;
}
