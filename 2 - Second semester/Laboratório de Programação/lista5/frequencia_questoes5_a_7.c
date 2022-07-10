// Discente: Paulo Henrique Diniz de Lima Alencar.
// CC - Matrícula: 494837.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Questão 7:..............

// Estrutura do Tipo Ponto:
typedef struct ponto {
    float x;
    float y;
} Ponto;

// Estrutura do tipo Retangulo:
typedef struct retangulo {
    Ponto v1;
    Ponto v2;
} Retangulo;

int ponto_em_retangulo (Retangulo r, Ponto p) {
    
    if ((p.x > r.v1.x && p.x < r.v2.x) && (p.y > r.v1.y && p.y < r.v2.y)) {
        return 1;
    }
    return 0;
}


// Questão 8:..............

// Estrutura do tipo Aluno:
typedef struct aluno {
    char nome[80];
    char turma[120];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
} Aluno;

void imprime_dados (Aluno **alunos, int n) {

    float media;
    printf(".........: Discentes Aprovados :...........\n\n");    
    for (int i = 0; i < n; i++) {

        media = (alunos[i] -> nota1 + alunos[i] -> nota2 + alunos[i] -> nota3) / n;
        
        if (media >= 7) {

            printf("Nome.....: %s  \n",alunos[i] -> nome);
            printf("Turma....: %s  \n",alunos[i] -> turma);
            printf("Matrícula: %d  \n",alunos[i] -> matricula);
            printf("Nota1....: %.2f\n",alunos[i] -> nota1);    
            printf("Nota2....: %.2f\n",alunos[i] -> nota2);
            printf("Nota3....: %.2f\n",alunos[i] -> nota3);
            printf("Média....: %.3f\n\n",media);
        }
    }
}

// Questão 7:.................

float media_da_turma (Aluno **alunos, int n) {
    float soma = 0;
    float soma_notas = 0; 
    for (int i = 0; i < n; i++) {
        soma_notas = alunos[i] -> nota1 + alunos[i] -> nota2 + alunos[i] -> nota3;
        soma = soma + soma_notas;
    }

    return soma / n;
}

// Função principal:
int main (void) {
    // Questão 7:.................................................
    Retangulo r;
    Ponto p;
    
    // Pontos do retângulo 'r': 
    // (0, 0)
    r.v1.x = -4;
    r.v1.y = -3;
    
    // (5, 3)
    r.v2.x = 6;
    r.v2.y = 3;
    
    // Pontos do ponto 'p':
    // (3, 2)
    p.x = 5;
    p.y = 1; 
    
    int retorno = ponto_em_retangulo (r, p);
    printf("Questão 5:\n");
    printf("Ponto no interior de retângulo: %d \n\n", retorno);
    //............................................................
    

    // Questão 6:.................................................
    Aluno **alunos;

    alunos = (Aluno**) malloc (3 * sizeof(Aluno*));
    
    for (int i = 0; i < 3; i++) {
        alunos[i] = (Aluno*) malloc (sizeof(Aluno));    
    }
    
    strcpy(alunos[0]->nome, "Paulo");
    strcpy(alunos[0]->turma,"Ciencia da Computacao");
    alunos[0]->matricula = 484957;
    alunos[0]->nota1 = 8;
    alunos[0]->nota2 = 7;
    alunos[0]->nota3 = 8;

    strcpy(alunos[1]->nome, "Luara");
    strcpy(alunos[1]->turma,"Engenharia de Software");
    alunos[1]->matricula = 504585;
    alunos[1]->nota1 = 4;
    alunos[1]->nota2 = 7;
    alunos[1]->nota3 = 10;
    
    strcpy(alunos[2]->nome, "Karol");
    strcpy(alunos[2]->turma,"Ciencia da Computacao");
    alunos[2]->matricula = 568422;
    alunos[2]->nota1 = 10;
    alunos[2]->nota2 = 5;
    alunos[2]->nota3 = 2;
    
    int n = 3;
    printf("Questão 6: \n");
    imprime_dados (alunos, n);
    //..........................................................
    
    float media = media_da_turma (alunos, n);
    printf("Questão 7:\n");
    printf("Média da turma: %.3f\n",media);
    return 0;
}
