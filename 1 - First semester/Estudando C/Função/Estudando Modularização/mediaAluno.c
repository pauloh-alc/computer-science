#include <stdio.h>

/*
	Funcao: Calcular a media de um aluno e indicar se ele foi aprovador ou nao
	Dados de entrada:
		a: a primeira nota do aluno
		b: a segunda nota do aluno
	Dados de saida:
		media das duas notas digitadas pelo aluno
*/

float calculaMedia(float a, float b){
	float media; // media das duas notas do aluno
	
	media = (a + b) / 2;
	
	return media;
}
int main(){
	float nota1, nota2, resultado, notaAdicional;
	
	printf("Notas das duas avaliacoes regulares do aluno: ");
	scanf("%f%f",&nota1,&nota2);
	resultado = calculaMedia(nota1,nota2);
	
	if(resultado >= 7.0){
		printf("A meia do aluno foi: %f \n",resultado);
		printf("O aluno foi aprovado na disciplina. \n");
	}
	else{
		printf("Nota da avaliacao adicional do aluno: ");
		scanf("%f",&notaAdicional);
		resultado = calculaMedia(resultado,notaAdicional);
		printf("A media do aluno foi: %f \n",resultado);
		if(resultado >= 5.0){
			printf("O aluno foi aprovado na disciplina. \n");
		}
		else{
			printf("O aluno foi reprovado na disciplina. \n");
		}
	}
return 0;
}
