#include <stdio.h>

typedef struct {
	int idade;
	int matricula;
	float coeficiente;
	int periodo;
} tEstudante; 

	int leituraIdade ()
	{
		int idade;
		
		printf("Idade: ");
		scanf("%d",&idade);
		
		return idade;
	}
	
	int leituraMatricula ()
	{
		int matricula;
	
		printf("Matricula: ");
		scanf("%d",&matricula);
		
		return matricula;
	}
	
	float leituraCoeficiente ()
	{
		float coeficiente;
		
		printf("Coeficiente: ");
		scanf("%f",&coeficiente);
		
		return coeficiente;
	}
// tipo de retorno da função      identificador / nome da função
	int                           leituraPeriodo () 
	{
		int periodo;n
		
		printf("Periodo: ");
		scanf("%d",&periodo);
		
		return periodo;
	}
	
	// tipo    identificador/nome
	tEstudante leituraEstudante ()
	{
		tEstudante aluno;
		
		printf("Idade: ");
		scanf("%d",&aluno.idade);
		printf("Matricula: ");
		scanf("%d",&aluno.matricula);
		printf("Coeficiente: ");
		scanf("%f",&aluno.coeficiente);
		printf("Periodo: ");
		scanf("%d",&aluno.periodo);
		//         <var>.<atributo>
		
		return aluno; // Retornando uma variável do tipo estrutura.
	}

int main ()
{
	tEstudante aluno1, aluno2;
//    tipo      var      var
	
	aluno1.idade = leituraIdade ();
	aluno1.matricula = leituraMatricula ();
	aluno1.coeficiente = leituraCoeficiente ();
	aluno1.periodo = leituraPeriodo ();
	
	aluno2 = leituraEstudante ();
	
	return 0;
}
