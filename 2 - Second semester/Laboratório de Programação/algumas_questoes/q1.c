#include <stdio.h>
#define TAM 5

typedef struct aluno {
    int matricula;
    char cartao_resposta[5];
} Aluno;


void add_cartao_resposta_dos_alunos (Aluno alunos[]) {
    int i, j;
    for (i = 0; i < TAM; i++) {
        printf("Digite a matrícula do aluno %d: ",i+1);
        scanf("%d",&alunos[i].matricula);
        __fpurge(stdin);
        
        printf("Digite o cartao resposta do aluno %d: \n",i+1);
        for (j = 0; j < 5; j++) {
            printf("%d) ",j+1);
            scanf("%c",&alunos[i].cartao_resposta[j]);
            __fpurge(stdin);
            
            if (alunos[i].cartao_resposta[j] >= 97 && alunos[i].cartao_resposta[j] <= 122) {
                alunos[i].cartao_resposta[j] -= 32; 
            }
            
        }
    }
}

void realizar_correcoes (Aluno alunos[], char *gabarito) {
    int qtd = 0;
    for (int i = 0; i < TAM; i++) {
        qtd = 0;
        for (int j = 0; j < 5; j++) {
            if (alunos[i].cartao_resposta[j] == gabarito[j]) qtd++;
        }
        printf("Matrícula: %d | Acertos: %d \n",alunos[i].matricula, qtd);
    }
}

int main (void) {
    Aluno alunos[TAM];
    char gabarito[] = {'A', 'A', 'C', 'E', 'B'};
    
    add_cartao_resposta_dos_alunos(alunos);
    realizar_correcoes (alunos, gabarito);

    return 0;    
}
