#include <stdio.h>
#define TAM 7

int maior (int v[], int i)
{

	if (i == 0) return v[0]; 
	
	int maiorEle = maior (v, i - 1);
	
	if (v[i] >= maiorEle){
		maiorEle = v[i];
		return maiorEle;
	}
	else {
		return maiorEle;
	}
}
int main ()
{
	int result;
	
	int vetor[TAM] = {550, -8, 7, 1444, 5, 99, 40};
	
	result = maior (vetor, TAM);
	
	printf("%d. \n", result);
	return 0;
}
