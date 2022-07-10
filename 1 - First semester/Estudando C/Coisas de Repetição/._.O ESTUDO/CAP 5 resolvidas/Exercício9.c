#include <stdio.h>

int main(){
	// Exercício resolvidos - 9
	
	int alunos;
	float nota1, nota2;
	int alunosReprovados, alunosAprovados, alunosExame;
	float mediaAluno, mediaClasse, somaClasse;
	
	alunosReprovados = 0;
	alunosAprovados = 0;
	alunosExame = 0;
	somaClasse = 0;
	
	for(alunos = 1; alunos <= 6; alunos++){
		
		printf("Entre com 'nota 1' e 'nota 2' do aluno '%d' respectivamente >>> ",alunos);
		scanf("%f%f",&nota1,&nota2);
		printf("\n");
		mediaAluno = (nota1 + nota2) / 2.0;
		
		printf("\t Aluno %d - \n", alunos);
		printf("Media >>> %.2f. \n", mediaAluno);
		
		if(mediaAluno <= 3){
			printf("Reprovado. \n");
			alunosReprovados += 1;
		}
		else if(mediaAluno > 3 && mediaAluno < 7){
			printf("Exame. \n");
			alunosExame += 1;
		}
		else if(mediaAluno >= 7){
			printf("Aprovado. \n");	
			alunosAprovados +=1 ;
		}
		
		somaClasse = somaClasse + mediaAluno;
		printf("\n");
	}
	
	mediaClasse = somaClasse / 6.0;
	
	printf("Media da classe >>> %.2f. \n", mediaClasse);
	printf("Total de alunos aprovados >>> %d. \n", alunosAprovados);
	printf("Total de alunos de exame >>> %d. \n", alunosExame);
	printf("Total de alunos reprovados >>> %d. \n", alunosReprovados);
	
return 0;
}
