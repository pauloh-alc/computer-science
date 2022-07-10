#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOME_DO_ARQUIVO "arquivo.txt"

// Resolução: item a)
typedef struct aluno {
    char nome[81];
    int matricula;
    float nota1, nota2, trabalho;
} Aluno;

int minha_strcmp(char* s1, char* s2) {
    
    while (*s1 != '\0' || *s2 != '\0') {
        
        if (*s1 != *s2) {
            if (*s1 > *s2) return  1;
            else           return -1;
        }

        s1 += 1;
        s2 += 1;
    }
    return 0;
}

void imprime (Aluno** alunos, int qtd) {
    
    Aluno *aux;
    float media;

    // Realizando a ordenação do vetor de ponteiros:
    for (int i = 0; i < qtd; i++) { 
        for (int j = i; j < qtd; j++) {
            if (minha_strcmp(alunos[i] -> nome, alunos[j] -> nome) == 1) {
                aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;     
            }
        }
    }
    
    printf("\n.... RESULTADO FINAL ....\n"); 

    for (int i = 0; i < qtd; i++) { 
        
        media = (alunos[i] -> nota1 + alunos[i] -> nota2 + alunos[i] -> trabalho) / 3; 
        printf("Matrícula: %d\n",alunos[i] -> matricula);
        printf("Nome.....: %s\n",alunos[i] -> nome);
        printf("Média....: %f\n",media);
         
        if (media >= 7) 
            printf("Estado...: Aprovado\n");
        else if (media >= 4 && media < 7)
            printf("Estado...: AF\n");
        else if(media >= 0 && media < 4)
            printf("Estado...: Reprovado\n");
        
        printf("\n");
    }
    
}
void armazenar_em_arquivo (Aluno** alunos, int qtd) {

    FILE* arquivo;
    arquivo = fopen(NOME_DO_ARQUIVO, "wt");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo !!\n");
        exit(1);
    }
    
    fprintf(arquivo,"%d\n",qtd);

    for(int i = 0; i < qtd; i++) {
        fprintf(arquivo,"%s\n",alunos[i] -> nome);
        fprintf(arquivo,"%d\n",alunos[i] -> matricula);
        fprintf(arquivo,"%.1f %.1f %.1f\n",alunos[i] -> nota1, alunos[i] -> nota2, alunos[i] -> trabalho);
    }
    fclose(arquivo);   
}

void pegar_info_em_arquivo () {

    FILE* arquivo;
    int qtd;
    Aluno** alunos;

    arquivo = fopen(NOME_DO_ARQUIVO, "rt");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo !!\n");
        exit(1);
    }

    fscanf(arquivo,"%d\n",&qtd);

    alunos = (Aluno**) malloc(sizeof(Aluno*) * qtd);
    for (int i = 0; i < qtd; i++) {
        alunos[i] = (Aluno*) malloc (sizeof(Aluno));
    }

    for (int i = 0; i < qtd; i++) {
        fscanf(arquivo,"%[^\n]",alunos[i] -> nome);
        fscanf(arquivo,"%d\n",&alunos[i] -> matricula);
        fscanf(arquivo,"%f %f %f\n",&alunos[i] -> nota1, &alunos[i] -> nota2, &alunos[i] -> trabalho);
    }
    
    imprime(alunos, qtd);
}

int main (void) {
    Aluno **alunos;
    int qtd;
    
    
    printf("Quantidade de discentes na turma: ");
    scanf("%d",&qtd);

    alunos = (Aluno**) malloc (sizeof(Aluno*) * qtd);
    
    for (int i = 0; i < qtd; i++) {
        alunos[i] = (Aluno*) malloc (sizeof(Aluno));
    }
    
    char c;
    for (int i = 0; i < qtd; i++) {
        printf("Matrícula: ");
        scanf("%d",&alunos[i] -> matricula); 
        scanf("%c",&c);
        printf("Nome.....: ");
        scanf("%[^\n]",alunos[i] -> nome);
        scanf("%c",&c);
        printf("Nota 1...: ");
        scanf("%f",&alunos[i] -> nota1);
        printf("Nota 2...: ");
        scanf("%f",&alunos[i] -> nota2);
        printf("Trabalho.: ");
        scanf("%f",&alunos[i] -> trabalho);

        printf("\n");
    }
    
    //imprime (alunos, qtd);
   
    armazenar_em_arquivo(alunos, qtd);
    
    pegar_info_em_arquivo();
    return 0;
}
